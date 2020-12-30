#ifndef _SORT_LSC
#define _SORT_LSC

#include "../Contracts/ISort.h"

class SortSlc : public ISort
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_SORT_LSC

