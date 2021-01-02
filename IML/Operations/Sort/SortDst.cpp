#include "SortDst.h"
#include "../../Utils/Constants.h"

#include <set>

std::vector<double> SortDst::execute(OperationParam param)
{
	std::vector<double> args = param.getArguments();
	std::vector<double>::iterator r, w;
	std::set<int> tmpset;

	for (r = args.begin(), w = args.begin(); r != args.end(); ++r)
	{
		if (tmpset.insert(*r).second)
		{
			*w++ = *r;
		}
	}

	args.erase(w, args.end());

	return args;
}

std::string SortDst::toString()
{
	return Constants::RemoveDuplicatesCommandName;
}
