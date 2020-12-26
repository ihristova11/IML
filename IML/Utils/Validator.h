#ifndef _VALIDATOR_H
#define _VALIDATOR_H

#include <fstream>

class Validator
{
public: 
	bool validateFile(std::ifstream& ifs);
};
#endif // !_VALIDATOR_H

