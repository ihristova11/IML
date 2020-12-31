#include "MapMlt.h"

std::vector<double> MapMlt::execute(OperationParam param)
{
	std::vector<double> res;
	for (double val : param.getArguments())
	{
		res.push_back(std::stod(param.getAttributes().front()) * val); // convert to double 
	}

	return res;
}

std::string MapMlt::toString()
{
    return std::string();
}
