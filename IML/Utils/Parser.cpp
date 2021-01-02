#include "Parser.h"
#include "Constants.h"

#pragma region include_operations
#include "../Operations/Contracts/IOperation.h"
#include "../Operations/OperationParam.h"

#include "../Operations/Map/MapInc.h"
#include "../Operations/Map/MapMlt.h"

#include "../Operations/Aggregate/AggregateAvg.h"
#include "../Operations/Aggregate/AggregateFst.h"
#include "../Operations/Aggregate/AggregateLst.h"
#include "../Operations/Aggregate/AggregateProd.h"
#include "../Operations/Aggregate/AggregateSum.h"

#include "../Operations/Sort/SortDst.h"
#include "../Operations/Sort/SortOrd.h"
#include "../Operations/Sort/SortRev.h"
#include "../Operations/Sort/SortSlc.h"
#pragma endregion include_operations

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stack>

Parser::Parser()
{
	seedOperations();
}

std::vector<double> Parser::repl(std::ifstream& ifs)
{
	// todo: where should we clear memory?
	std::vector<double> result;
	std::string temp;
	std::vector<std::string> operations;

	while (std::getline(ifs, temp, '<'))
	{
		operations.push_back(temp);
	}

	if (!startsWithOpeningBracket(operations))
	{
		throw "Ivalid syntax! Expression does not start with an opening bracket!";
	}

	int openingBracketsNumber = operations.size() - 1;
	int closingBracketsNumber = 0;
	for (std::string element : operations)
	{
		for (size_t i = 0; i < element.length(); i++)
		{
			if (element[i] == '>')
			{
				closingBracketsNumber++;
			}
		}
	}

	if (openingBracketsNumber != closingBracketsNumber)
	{
		throw "Invalid syntax! Opening brackets number does not match the closing brackets one!";
	}

	std::vector<std::string> lst;
	for (std::string op : operations)
	{
		std::vector<std::string> res = split(op, '>');
		for (size_t i = 0; i < res.size(); i++)
		{
			lst.push_back(res[i]);
		}
	}

	std::vector<std::string> last;
	for (std::string op : lst)
	{
		std::vector<std::string> res = split(op, ' ');
		for (size_t i = 0; i < res.size(); i++)
		{
			last.push_back(res[i]);
		}
	}

	if (!closingBracketsPlacedCorrectly(last))
	{
		throw "Invalid syntax! Closing brackets are not placed correctly!";
	}

	std::stack<std::pair<IOperation*, OperationParam*>> store;

	std::string opName;
	std::vector<std::string> opAttr;
	std::vector<double> opArgs;

	for (size_t i = 0; i < last.size(); i++)
	{
		if (isOperation(last[i]))
		{
			IOperation* op = retrieveOperationFromString(last[i]);
			store.push(std::make_pair(op, new OperationParam()));
		}
		else if (isClosingOperation(last[i]))
		{
			// check the last one on the stack 
			IOperation* top = store.top().first;
			std::string closing = last[i].substr(1);
			IOperation* current = retrieveOperationFromString(closing);
			if (top->toString() != current->toString())
			{
				throw "Not matching tags!";
			}

			// execute operation
			result = top->execute(*(store.top().second));
			store.pop();

			// update stack with variables
			if (!store.empty())
			{
				for (double arg : result)
				{
					store.top().second->addArg(arg);
				}
			}
		}
		else if (i > 1 && isAttribute(last[i], last[i - 1]))
		{
			store.top().second->addAttr(last[i]);
		}
		else if (isDouble(last[i]))
		{
			store.top().second->addArg(std::stod(last[i]));
		}
		else
		{
			throw "Invalid syntax!";
		}
	}
	return result;
}

IOperation* Parser::retrieveOperationFromString(std::string& str)
{
	IOperation* operation = nullptr;
	for (size_t i = 0; i < operations.size(); i++)
	{
		if ((this->operations[i])->toString() == str)
		{
			operation = this->operations[i];
			break;
		}
	}
	return operation;
}

Parser::~Parser()
{
	// todo : dealloc all operations
}

std::vector<std::string> Parser::split(std::string str, char symbol)
{
	std::istringstream iss(str);
	std::string segment;
	std::vector<std::string> list;

	while (std::getline(iss, segment, symbol))
	{
		list.push_back(segment);
	}

	return list;
}

bool Parser::startsWithOpeningBracket(std::vector<std::string>& res)
{
	return res.size() > 0 && res[0] == "";
}

bool Parser::closingBracketsPlacedCorrectly(std::vector<std::string>& res)
{
	for (std::string el : res)
	{
		if (el == "")
		{
			return false;
		}
	}
	return true;
}

bool Parser::isDouble(std::string& str)
{
	double parsed;
	bool isValid;
	try
	{
		parsed = std::stod(str);
		isValid = true;
	}
	catch (std::exception&)
	{
		isValid = false;
	}

	return isValid;
}

bool Parser::isNatural(std::string& str)
{
	int parsed;
	bool isValid;
	try
	{
		parsed = std::stoi(str);
		isValid = true;
	}
	catch (std::exception&)
	{
		isValid = false;
	}

	return isValid && parsed >= 0;
}

bool Parser::isAttribute(std::string& str, std::string& op)
{
	if (str.front() == '"' && str.back() == '"')
	{
		std::string retrieved = str.substr(1, str.size() - 2);
		return ((op == Constants::MapIncrementCommandName && isDouble(retrieved))
			|| (op == Constants::MapMultiplyCommandName && isDouble(retrieved))
			|| (op == Constants::OrderCommandName && (str == "ASC" || str == "DSC"))
			|| (op == Constants::SubListCommandName && isNatural(retrieved)));
	}
	return false;
}

bool Parser::isOperation(std::string& str)
{
	for (IOperation* op : this->operations)
	{
		if (op->toString() == str)
		{
			return true;
		}
	}
	return false;
}

bool Parser::isClosingOperation(std::string& str)
{
	// starts with / and is valid operation name
	if (str.length() > 0)
	{
		std::string sub = str.substr(1);
		return str.front() == '/' && isOperation(sub);
	}

	return false;
}

void Parser::seedOperations()
{
	this->operations.push_back(new MapInc());
	this->operations.push_back(new MapMlt());

	this->operations.push_back(new AggregateAvg());
	this->operations.push_back(new AggregateFst());
	this->operations.push_back(new AggregateLst());
	this->operations.push_back(new AggregateProd());
	this->operations.push_back(new AggregateSum());

	this->operations.push_back(new SortDst());
	this->operations.push_back(new SortOrd());
	this->operations.push_back(new SortRev());
	this->operations.push_back(new SortSlc());
}

