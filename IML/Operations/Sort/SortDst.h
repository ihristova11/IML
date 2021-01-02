#ifndef _SORT_DST_H
#define _SORT_DST_H

#include "../Contracts/IOperation.h"

class SortDst : public IOperation
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_SORT_DST_H
