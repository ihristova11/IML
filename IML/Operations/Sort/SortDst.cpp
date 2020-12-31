#include "SortDst.h"
#include <set>

std::vector<double> SortDst::execute(OperationParam param)
{
    std::vector<double> res;
    std::vector<double> args = param.getArguments();
    std::set<double> s(args.begin(), args.end());
    res.assign(s.begin(), s.end());
    return res; // res may not be needed
}

std::string SortDst::toString()
{
    return std::string();
}
