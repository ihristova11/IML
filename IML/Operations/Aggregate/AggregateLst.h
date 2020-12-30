#ifndef _AGGREGATE_LST_H
#define _AGGREGATE_LST_H

#include "../Contracts/IAggregate.h"

class AggregateLst : public IAggregate
{
public:
	virtual std::string toString() override;

	virtual double execute() override;
};

#endif // !_AGGREGATE_LST_H
