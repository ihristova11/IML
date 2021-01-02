#include "OperationParam.h"

OperationParam::OperationParam()
	: arguments(), attributes() { }

OperationParam::OperationParam(std::vector<double> args, std::vector<std::string> attributes)
	:arguments(args), attributes(attributes) { }

std::vector<double> OperationParam::getArguments() const
{
	return this->arguments;
}

std::vector<std::string> OperationParam::getAttributes() const
{
	return this->attributes;
}

void OperationParam::addArg(double arg)
{
	this->arguments.push_back(arg);
}

void OperationParam::addAttr(const std::string& attr)
{
	this->attributes.push_back(attr);
}
