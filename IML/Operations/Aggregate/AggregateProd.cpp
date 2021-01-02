#include "AggregateProd.h"

std::vector<double> AggregateProd::execute(OperationParam param)
{
	double prod = 1;
	for (double val : param.getArguments())
	{
		prod *= val;
	}

	return std::vector<double>{prod};
}

std::string AggregateProd::toString()
{
    return std::string();
}

