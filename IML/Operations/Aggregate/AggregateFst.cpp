#include "AggregateFst.h"
#include "../../Utils/Constants.h"

std::vector<double> AggregateFst::execute(OperationParam param)
{
    return std::vector<double>{param.getArguments().front()}; // todo: check if first exists, should have at least 1 el
}

std::string AggregateFst::toString()
{
    return Constants::AggregateFirstCommandName;
}
