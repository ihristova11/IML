#ifndef _SYNTAX_EXCEPTION_H
#define _SYNTAX_EXCEPTION_H

#include <exception>
#include <string>

class SyntaxException : public std::exception
{
public:
	SyntaxException(const std::string& msg, int err_num, int err_off);

	const char* what() const throw ();

	int getErrorNumber() const throw();

	int getErrorOffset() const throw();

protected:
	int error_number;
	int error_offset;
	std::string error_message;
};
#endif // !_SYNTAX_EXCEPTION_H
