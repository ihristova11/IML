#include "Parser.h"
#include "Constants.h"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

std::vector<IOperation> Parser::parse(std::ifstream& ifs)
{
	std::string temp;
	std::vector<std::string> operations;

	while (std::getline(ifs, temp, '<'))
	{
		operations.push_back(temp);

		std::cout << temp << std::endl;
	}
	std::cout << "------------------------" << std::endl;
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
		std::cout << " + " << std::endl;
		for (size_t i = 0; i < res.size(); i++)
		{
			std::cout << res[i] << std::endl; // if empty string - skip 
			lst.push_back(res[i]);
		}
	}
	std::cout << "------------------------" << std::endl;

	std::vector<std::string> last;
	for (std::string op : lst)
	{
		std::vector<std::string> res = split(op, ' ');
		std::cout << " + " << std::endl;
		for (size_t i = 0; i < res.size(); i++)
		{
			std::cout << res[i] << std::endl;
			last.push_back(res[i]);
		}
	}
	if (!closingBracketsPlacedCorrectly(last))
	{
		throw "Invalid syntax! Closing brackets are not placed correctly!";
	}

	//_______________basic file structure is ok
	//working with last vector, processing the string entries
	for (size_t i = 0; i < last.size(); i++)
	{
		if (isOpeningOperation(last[i]))
		{
			// read attr and args -> 
		}
		else if (isClosingOperation(last[i]))
		{
			// push to stack and eval operation
		}
		else if (isDouble(last[i]))
		{
			// put in temp array
		}
		else if (i > 1 && isAttribute(last[i], last[i - 1]))
		{
			// starts with "" and ends in "", should be string or a number ()
			// should depend on the previous command 
			// not first in the vector, else - throw
		}
		else
		{
			// throw -> its invalid
		}
	}
	return std::vector<IOperation>();
}

std::vector<double> Parser::evaluate(std::vector<IOperation> operations)
{
	return std::vector<double>();
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
	catch (std::exception& ia)
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
	catch (std::exception& ia)
	{
		isValid = false;
	}

	return isValid && parsed >= 0;
}

bool Parser::isAttribute(std::string& str, std::string& op)
{
	if (str.front() == '"' && str.back() == '"') // is it possible to be whitespace? should we trim before that?
	{
		if (op == Constants::MapIncrementCommandName && isDouble(str))
		{
			// receives doubles
		}
		else if (op == Constants::MapMultiplyCommandName && isDouble(str))
		{
			// receives doubles
		}
		else if (op == Constants::OrderCommandName && (str == "ASC" || str == "DSC"))
		{
			//values should be "ASC" or "DSC"
		}
		else if (op == Constants::SubListCommandName && isNatural(str))
		{
			// expecting an index
		}
		else
		{
			throw "Invalid operation parameters!";
		}
	}

	return false;
}

bool Parser::isOpeningOperation(std::string& str)
{
	std::vector<std::string> operationNames
	{
		Constants::AggregateAverageCommandName,
		Constants::AggregateFirstCommandName,
		Constants::AggregateLastCommandName,
		Constants::AggregateProductCommandName,
		Constants::AggregateSumCommandName,

		Constants::MapIncrementCommandName,
		Constants::MapMultiplyCommandName,

		Constants::OrderCommandName,
		Constants::RemoveDuplicatesCommandName,
		Constants::ReverseCommandName,
		Constants::SubListCommandName
	};
	// valid operation name

	for (std::string op : operationNames)
	{
		if (op == str)
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
		return str.front() == '/' && isOpeningOperation(sub);
	}

	return false;
}

