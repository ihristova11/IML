#ifndef _AGGREGATE_LST_H
#define _AGGREGATE_LST_H

#include "../Contracts/IAggregate.h"

class AggregateLst : public IAggregate
{
public:
	virtual double execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_AGGREGATE_LST_H
