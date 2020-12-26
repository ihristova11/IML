#ifndef _IAGGREGATE_H
#define _IAGGREGATE_H

#include "IOperation.h"

class IAggregate : public IOperation
{
public: 
	virtual std::string toString() = 0;

	virtual double execute() = 0;
};
#endif // !_IAGGREGATE_H

