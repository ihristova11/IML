#include "OperationParam.h"

OperationParam::OperationParam(std::string name, std::vector<double> args, std::vector<double> attributes)
	: operationName(name), arguments(args), attributes(attributes) { }

std::string OperationParam::getOperationName() const
{
	return this->operationName;
}

std::vector<double> OperationParam::getArguments() const
{
	return this->arguments;
}

std::vector<double> OperationParam::getAttributes() const
{
	return this->attributes;
}
