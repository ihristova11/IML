#include "SortOrd.h"
#include "../../Utils/Constants.h"

std::vector<double> SortOrd::execute(OperationParam param)
{
	std::vector<double> args = param.getArguments();
	std::string index = param.getAttributes().front(); // todo: update with enum

	if (index.compare("ASC") == 0)
	{
		std::sort(args.begin(), args.end());
	}
	else
	{
		std::sort(args.begin(), args.end(), std::greater<double>());
	}

	return args;
}

std::string SortOrd::toString()
{
	return Constants::OrderCommandName;
}
