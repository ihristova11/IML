#ifndef _AGGREGATE_AVG_H
#define _AGGREGATE_AVG_H

#include "../Contracts/IAggregate.h"

class AggregateAvg : public IAggregate
{
public:
	virtual double execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_AVG_H

