#ifndef _AGGREGATE_FST_H
#define _AGGREGATE_FST_H

#include "../Contracts/IOperation.h"

class AggregateFst : public IOperation
{
public: 
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_FST_H
