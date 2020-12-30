#ifndef _SORT_REV_H
#define _SORT_REV_H

#include "../Contracts/ISort.h"

class SortRev : public ISort
{
public:
	virtual std::string toString() override;
	
	virtual std::vector<double> execute() override;
};

#endif // !_SORT_REV_H

