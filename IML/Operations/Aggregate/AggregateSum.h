#ifndef _AGGREGATE_SUM_H
#define _AGGREGATE_SUM_H

#include "../Contracts/IOperation.h"

class AggregateSum : public IOperation
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_SUM_H

