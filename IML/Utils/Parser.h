#ifndef _PARSER_H
#define _PARSER_H

#include <fstream>
/// <summary>
/// A class parsing the file input and evaluating the result
/// </summary>
class Parser 
{
public: 
	void parse(std::ifstream& ifs);

	void evaluate();
};
#endif // !_PARSER_H

