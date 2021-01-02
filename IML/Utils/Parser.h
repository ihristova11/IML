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

	/// <summary>
	/// read-eval-print-loop
	/// </summary>
	/// <param name="ifs">std::ifstream of input file</param>
	/// <returns>std::vector<std::string> with the result</returns>
	std::vector<double> repl(std::ifstream& ifs);

	/// <summary>
	/// converts std::string to IOperation*
	/// </summary>
	/// <param name="ifs">std::ifstream of input file</param>
	/// <returns>std::vector<std::string> with the result</returns>
	IOperation* retrieveOperationFromString(std::string& str);

	~Parser();
private:
	std::vector<IOperation*> operations;

	/// <summary>
	/// split strings by given char delimiter
	/// </summary>
	/// <param name="str">a string representation</param>
	/// <param name="symbol">delimiter</param>
	/// <returns>std::vector<std::string> with the result</returns>
	std::vector<std::string> split(std::string str, char symbol);

	/// <summary>
	/// check if file starts with an opening bracket
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool startsWithOpeningBracket(std::vector<std::string>& res);

	/// <summary>
	/// check if closing brackets are placed correctly
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool closingBracketsPlacedCorrectly(std::vector<std::string>& res);

	/// <summary>
	/// check if std::string can be parsed to double
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isDouble(std::string& str);

	/// <summary>
	/// check if std::string can be parsed to non-negative integer
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isNatural(std::string& str);

	/// <summary>
	/// check if std::string is an attribute
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isAttribute(std::string& str, std::string& op);

	/// <summary>
	/// check if std::string represents operation
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isOperation(std::string& str);

	/// <summary>
	/// check if std::string is closing tag
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isClosingOperation(std::string& str);

	/// <summary>
	/// check if std::string contains newline
	/// </summary>
	/// <param name="res">std::vector<std::string> vector to evaluate</param>
	/// <returns>bool</returns>
	bool isNewline(std::string& str);

	/// <summary>
	/// Registers all operations to be used during the program execution
	/// </summary>
	void seedOperations();

	/// <summary>
	/// Deletes previously seeded operations
	/// </summary>
	void deleteOperations();
};
#endif // !_PARSER_H

