#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

#include "Utils/Validator.h"
#include "Utils/Constants.h"
#include "Utils/Parser.h"
#include "Operations/Contracts/IOperation.h"
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
		std::vector<IOperation*> result = parser.parse(ifs);
		parser.evaluate(result);

		ifs.close();
	}
	catch (std::exception& ia)
	{
		std::cout << "Program cannot proceed! " << ia.what() << std::endl;
	}

	return 0;
}