#include "SortRev.h"
#include "../../Utils/Constants.h"

#include <stack>

std::vector<double> SortRev::execute(OperationParam param)
{
    std::vector<double> res;
    std::vector<double> args = param.getArguments();

    for (int i = args.size(); i >= 0; i--)
    {
        res.push_back(args[i]);
    }

    return res;
}

std::string SortRev::toString()
{
    return Constants::ReverseCommandName;
}
