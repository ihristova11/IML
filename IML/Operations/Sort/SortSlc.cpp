#include "SortSlc.h"

std::vector<double> SortSlc::execute(OperationParam param)
{
    std::vector<double> res;
    std::vector<double> args = param.getArguments();
    int index = std::stoi(param.getAttributes().front()); // check if exception can be thrown
    
    for (int i = index; index < args.size(); i++)
    {
        res.push_back(args[i]);
    }

    return res; // return empty if index is out of range
}

std::string SortSlc::toString()
{
    return std::string();
}

