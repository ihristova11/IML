#include "MapInc.h"

std::vector<double> MapInc::execute(OperationParam param)
{
    std::vector<double> res;
	for (double val : param.getArguments())
	{
		res.push_back(std::stod(param.getAttributes().front()) + val); // convert to double 
	}

	return res;
}

std::string MapInc::toString()
{
    return std::string();
}
