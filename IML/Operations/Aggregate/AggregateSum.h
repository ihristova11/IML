#ifndef _AGGREGATE_SUM_H
#define _AGGREGATE_SUM_H

#include "../Contracts/IAggregate.h"

class AggregateSum : public IAggregate
{
public:
	virtual double execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_SUM_H

