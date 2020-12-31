#include "SortOrd.h"

std::vector<double> SortOrd::execute(OperationParam param)
{
	std::vector<double> res;
	std::vector<double> args = param.getArguments();
	std::string index = param.getAttributes().front(); // todo: update with enum

	if (index.compare("ASC") == 0)
	{
		return sort(args);
	}

	return sort(args, false);
}

std::string SortOrd::toString()
{
	return std::string();
}

std::vector<double> SortOrd::sort(std::vector<double>& v, bool asc)
{
	return std::vector<double>(); // todo: implement
}

