#ifndef _SORT_DST_H
#define _SORT_DST_H

#include "../Contracts/ISort.h"

class SortDst : public ISort
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_SORT_DST_H
