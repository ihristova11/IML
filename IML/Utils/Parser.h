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
	std::vector<IOperation> parse(std::ifstream& ifs);

	std::vector<double> evaluate(std::vector<IOperation> operations);
private:
	std::vector<std::string> split(std::string str, char symbol);
	bool startsWithOpeningBracket(std::vector<std::string>& res);
	bool closingBracketsPlacedCorrectly(std::vector<std::string>& res);
	bool isDouble(std::string& str);
	bool isNatural(std::string& str);
	bool isAttribute(std::string& str, std::string& op);
	bool isOpeningOperation(std::string& str);
	bool isClosingOperation(std::string& str);
};
#endif // !_PARSER_H

