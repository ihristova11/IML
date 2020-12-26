#include <string>
#include <vector>
#include <fstream>

#include "Utils/Validator.h"
#include "Utils/Parser.h"

int main()
{	
	std::string input = "";
	std::string output = "";

	std::ifstream ifs;
	ifs.open(input);
	Validator validator;
	Parser parser;

	bool valid = validator.validateFile(ifs);
	if (valid)
	{
		// todo: parser.parse();
		parser.parse(ifs);
	}

	return 0;
}