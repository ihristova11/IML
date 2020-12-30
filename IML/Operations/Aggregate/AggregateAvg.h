#ifndef _AGGREGATE_AVG_H
#define _AGGREGATE_AVG_H

#include "../Contracts/IAggregate.h"

class AggregateAvg : public IAggregate
{
public:
	virtual std::string toString() override;

	virtual double execute() override;
};
#endif // !_AGGREGATE_AVG_H

