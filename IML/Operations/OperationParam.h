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
	OperationParam(std::string name, std::vector<double> args, std::vector<double> attributes);

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
	std::vector<double> getAttributes() const;

private:
	std::string operationName; // todo: delete if not needed
	std::vector<double> arguments; // todo: check if name is valid?
	std::vector<double> attributes;
};

#endif // !_OPERATION_PARAM_H

