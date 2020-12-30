#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include "Utils/Validator.h"
#include "Utils/Parser.h"

int main()
{
	std::string input = "input/input1.txt";
	std::string output = "output/output1.txt";

	std::ifstream ifs;
	ifs.open(input);
	Validator validator;
	Parser parser;

	std::string temp;

	/*while (ifs)
	{
		ifs >> temp;
		std::cout << temp << std::endl;
	}*/

	while (std::getline(ifs, temp, '<'))
	{
		std::cout << temp << std::endl;
	}

	//split by '<' and push to a vector 
	// work with the vector -> all operations push to a stack (create operation param)

	ifs.close();
	//bool valid = validator.validateFile(ifs);
	//if (valid)
	//{
	//	// todo: parser.parse();
	//	parser.parse(ifs);
	//}

	return 0;
}