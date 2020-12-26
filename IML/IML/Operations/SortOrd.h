#ifndef _SORT_ORD_H
#define _SORT_ORD_H

#include "Contracts/ISort.h"

class SortOrd : public ISort
{
public: 
	virtual std::string toString() override;

	virtual std::vector<double> execute() override;
};
#endif // !_SORT_ORD_H

