#ifndef _ISORT_H
#define _ISORT_H

#include "IOperation.h"
#include <vector>

class ISort : public IOperation
{
public: 
	virtual std::string toString() = 0;
	virtual std::vector<double> execute() = 0;
};
#endif // !_ISORT_H

