#include "AggregateSum.h"

std::vector<double> AggregateSum::execute(OperationParam param)
{
	double sum = 0;
	for (double val : param.getArguments())
	{
		sum += val;
	}

	return std::vector<double>{sum};
}

std::string AggregateSum::toString()
{
    return std::string();
}

