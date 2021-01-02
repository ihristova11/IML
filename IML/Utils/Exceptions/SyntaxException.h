#ifndef _SYNTAX_EXCEPTION_H
#define _SYNTAX_EXCEPTION_H

#include <exception>
#include <string>

/// <summary>
/// A custom exception class representing a syntax exception
/// </summary>
class SyntaxException : public std::exception
{
public:
	SyntaxException(const std::string& msg, int err_num, int err_off);

	/// <summary>
	/// get exception message
	/// </summary>
	/// <returns>const char*</returns>
	const char* what() const throw ();

	/// <summary>
	/// getErrorNumber
	/// </summary>
	/// <returns>int</returns>
	int getErrorNumber() const throw();

	/// <summary>
	/// getErrorOffset
	/// </summary>
	/// <returns>int</returns>
	int getErrorOffset() const throw();

protected:
	int error_number;
	int error_offset;
	std::string error_message;
};
#endif // !_SYNTAX_EXCEPTION_H
