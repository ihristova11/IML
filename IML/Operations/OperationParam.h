#ifndef _OPERATION_PARAM_H
#define _OPERATION_PARAM_H

#include <string>
#include <vector>

/// <summary>
/// OperationParam is a class holding values related to Operation
/// </summary>
class OperationParam
{
public:
	OperationParam();

	OperationParam(std::vector<double> args, std::vector<std::string> attributes);

	/// <summary>
	/// returns the operation arguments
	/// </summary>
	/// <returns>std::vector<double></returns>
	std::vector<double> getArguments() const;

	/// <summary>
	/// returns the operation attributes
	/// </summary>
	/// <returns>std::vector<double></returns>
	std::vector<std::string> getAttributes() const;

	/// <summary>
	/// adds a new argument to the vector of arguments
	/// </summary>
	void addArg(double arg);

	void addAttr(const std::string& attr);

private:
	std::vector<double> arguments; // todo: check if name is valid?
	std::vector<std::string> attributes;
};

#endif // !_OPERATION_PARAM_H

