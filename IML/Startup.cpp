#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

#include "Utils/Constants.h"
#include "Utils/Parser.h"
#include "Operations/Contracts/IOperation.h"
#include <iostream>

int main()
{
	std::string input;
	std::string output;
	std::cout << "Enter input file: "; std::cin >> input;
	std::cout << "Enter output file: "; std::cin >> output;

	try
	{
		std::ifstream ifs;
		ifs.open(input);

		Parser parser;
		std::vector<double> result = parser.repl(ifs);

		ifs.close();

		std::ofstream ofs;
		ofs.open(output);
		for (double d : result)
		{
			ofs << d << " ";
		}
		ofs.close();

		std::cout << std::endl << "Success!" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << std::endl << "Program cannot proceed! " << ex.what() << std::endl;
	}

	return 0;
}