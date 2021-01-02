#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

#include "Utils/Validator.h"
#include "Utils/Constants.h"
#include "Utils/Parser.h"
#include <iostream>

int main()
{
	std::string input = "input/input1.txt";
	std::string output = "output/output1.txt";

	try
	{
		std::ifstream ifs;
		ifs.open(input);

		Parser parser;
		parser.parse(ifs);

		ifs.close();
	}
	catch (std::exception& ia)
	{
		std::cout << "Program cannot proceed! " << ia.what() << std::endl;
	}

	return 0;
}

//check with multiple parameters - does the split idea work as expected
//write some unit tests

//global store -> stores operations with their attr and args