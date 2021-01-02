#ifndef _SORT_ORD_H
#define _SORT_ORD_H

#include "../Contracts/IOperation.h"
#include <algorithm>

class SortOrd : public IOperation
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_SORT_ORD_H

