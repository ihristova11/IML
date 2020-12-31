#include "AggregateFst.h"

double AggregateFst::execute(OperationParam param)
{
    return param.getArguments().front(); // todo: check if first exists, should have at least 1 el
}

std::string AggregateFst::toString()
{
    return std::string();
}
