#include "SyntaxException.h"

SyntaxException::SyntaxException(const std::string& msg, int err_num, int err_off) 
	: error_number(err_num), error_offset(err_off), error_message(msg) {}

const char* SyntaxException::what() const throw()
{
	return error_message.c_str();
}

int SyntaxException::getErrorNumber() const throw()
{
	return error_number;
}

int SyntaxException::getErrorOffset() const throw()
{
	return error_offset;
}
