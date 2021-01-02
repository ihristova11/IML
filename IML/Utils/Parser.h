#ifndef _PARSER_H
#define _PARSER_H

#include <fstream>
#include <vector>
#include "../Operations/Contracts/IOperation.h"

/// <summary>
/// A class parsing the file input and evaluating the result
/// </summary>
class Parser 
{
public: 
	Parser();

	std::vector<double> repl(std::ifstream& ifs);

	IOperation* retrieveOperationFromString(std::string& str);

	~Parser();
private:
	std::vector<IOperation*> operations;

	std::vector<std::string> split(std::string str, char symbol);

	bool startsWithOpeningBracket(std::vector<std::string>& res);

	bool closingBracketsPlacedCorrectly(std::vector<std::string>& res);

	bool isDouble(std::string& str);

	bool isNatural(std::string& str);

	bool isAttribute(std::string& str, std::string& op);

	bool isOperation(std::string& str);

	bool isClosingOperation(std::string& str);

	bool isNewline(std::string& str);

	void seedOperations();

	void deleteOperations();
};
#endif // !_PARSER_H

