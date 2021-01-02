#include "AggregateLst.h"
#include "../../Utils/Constants.h"

std::vector<double> AggregateLst::execute(OperationParam param)
{
	return std::vector<double>{param.getArguments().back()}; // todo: check if no back?
}

std::string AggregateLst::toString()
{
	return Constants::AggregateLastCommandName;
}

