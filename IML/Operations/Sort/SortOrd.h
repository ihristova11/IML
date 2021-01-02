#ifndef _SORT_ORD_H
#define _SORT_ORD_H

#include "../Contracts/IOperation.h"

class SortOrd : public IOperation
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;

private:
	std::vector<double> sort(std::vector<double>& v, bool asc = true);
};
#endif // !_SORT_ORD_H

