#ifndef _AGGREGATE_FST_H
#define _AGGREGATE_FST_H

#include "../Contracts/IAggregate.h"

class AggregateFst : public IAggregate
{
public: 
	virtual std::string toString() override;

	virtual double execute() override;
};
#endif // !_AGGREGATE_FST_H
