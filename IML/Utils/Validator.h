#ifndef _VALIDATOR_H
#define _VALIDATOR_H

#include <fstream>

/// <summary>
/// Validator is a static class containing different functions for checking parameters validity
/// </summary>
class Validator
{
public: 
	static bool validateFile(std::ifstream& ifs); // todo: update 

private:
	static bool hasInvalidTag();
	
	static bool tagsClosedProperly();
	
	static bool validTagArguments();
	
	static bool validTagAttributes();
};
#endif // !_VALIDATOR_H

