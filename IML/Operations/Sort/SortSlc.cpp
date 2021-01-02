#include "SortSlc.h"
#include "../../Utils/Constants.h"

std::vector<double> SortSlc::execute(OperationParam param)
{
    std::vector<double> res;
    std::vector<double> args = param.getArguments();
    int index = std::stoi(param.getAttributes().front());
    
    for (int i = index; i < args.size(); i++)
    {
        res.push_back(args[i]);
    }

    return res;
}

std::string SortSlc::toString()
{
    return Constants::SubListCommandName;
}

