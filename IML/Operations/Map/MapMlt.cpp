#include "MapMlt.h"
#include "../../Utils/Constants.h"

std::vector<double> MapMlt::execute(OperationParam param)
{
	std::vector<double> res;
	for (double val : param.getArguments())
	{
		res.push_back(std::stod(param.getAttributes().front()) * val);
	}

	return res;
}

std::string MapMlt::toString()
{
	return Constants::MapMultiplyCommandName;
}
