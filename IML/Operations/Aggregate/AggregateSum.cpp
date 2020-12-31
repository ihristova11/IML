#include "AggregateSum.h"

double AggregateSum::execute(OperationParam param)
{
	double sum = 0;
	for (double val : param.getArguments())
	{
		sum += val;
	}

	return sum;
}

std::string AggregateSum::toString()
{
    return std::string();
}

