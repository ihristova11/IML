#include "AggregateAvg.h"

std::vector<double> AggregateAvg::execute(OperationParam param)
{
	double avg = 0;
	for (double val : param.getArguments())
	{
		avg += val;
	}

	return std::vector<double>{avg / param.getArguments().size()};
}

std::string AggregateAvg::toString()
{
    return std::string();
}

