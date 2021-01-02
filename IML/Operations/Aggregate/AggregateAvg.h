#ifndef _AGGREGATE_AVG_H
#define _AGGREGATE_AVG_H

#include "../Contracts/IOperation.h"

class AggregateAvg : public IOperation
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_AVG_H

