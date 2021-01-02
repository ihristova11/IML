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

	OperationParam(std::string name, std::vector<double> args, std::vector<std::string> attributes);

	/// <summary>
	/// returns the operation name
	/// </summary>
	/// <returns>std::string</returns>
	std::string getOperationName() const;

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

private:
	std::string operationName; // todo: delete if not needed
	std::vector<double> arguments; // todo: check if name is valid?
	std::vector<std::string> attributes;
};

#endif // !_OPERATION_PARAM_H

