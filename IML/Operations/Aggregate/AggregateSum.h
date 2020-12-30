#ifndef _AGGREGATE_SUM_H
#define _AGGREGATE_SUM_H

#include "../Contracts/IAggregate.h"

class AggregateSum : public IAggregate
{
public:
	virtual std::string toString() override;

	virtual double execute() override;
};
#endif // !_AGGREGATE_SUM_H

