#ifndef _AGGREGATE_PROD_H
#define _AGGREGATE_PROD_H

#include "../Contracts/IAggregate.h"

class AggregateProd : public IAggregate
{
public:
	virtual double execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_PROD_H

