#include "AggregateProd.h"

double AggregateProd::execute(OperationParam param)
{
	double prod = 1;
	for (double val : param.getArguments())
	{
		prod *= val;
	}

	return prod;
}

std::string AggregateProd::toString()
{
    return std::string();
}

