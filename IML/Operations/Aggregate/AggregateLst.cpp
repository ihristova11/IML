#include "AggregateLst.h"

double AggregateLst::execute(OperationParam param)
{
    return param.getArguments().back();
}

std::string AggregateLst::toString()
{
    return std::string();
}

