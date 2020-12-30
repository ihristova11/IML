#ifndef _AGGREGATE_PROD_H
#define _AGGREGATE_PROD_H

#include "../Contracts/IAggregate.h"

class AggregateProd : public IAggregate
{
public:
	virtual std::string toString() override;
	
	virtual double execute() override;
};
#endif // !_AGGREGATE_PROD_H

