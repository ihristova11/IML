#ifndef _SORT_LSC
#define _SORT_LSC

#include "Contracts/ISort.h"

class SortSlc : public ISort
{
public: 
	virtual std::string toString() override;

	virtual std::vector<double> execute() override;
};

#endif // !_SORT_LSC

