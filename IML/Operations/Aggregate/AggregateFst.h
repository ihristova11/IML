#ifndef _AGGREGATE_FST_H
#define _AGGREGATE_FST_H

#include "../Contracts/IAggregate.h"

class AggregateFst : public IAggregate
{
public: 
	virtual double execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_FST_H
