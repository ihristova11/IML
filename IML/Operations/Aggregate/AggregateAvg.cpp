#include "AggregateAvg.h"

double AggregateAvg::execute(OperationParam param)
{
	double avg = 0;
	for (double val : param.getArguments())
	{
		avg += val;
	}

	return avg / param.getArguments().size();
}

std::string AggregateAvg::toString()
{
    return std::string();
}

