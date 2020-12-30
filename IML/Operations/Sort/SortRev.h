#ifndef _SORT_REV_H
#define _SORT_REV_H

#include "../Contracts/ISort.h"

class SortRev : public ISort
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_SORT_REV_H

