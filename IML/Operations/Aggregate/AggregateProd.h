#ifndef _AGGREGATE_PROD_H
#define _AGGREGATE_PROD_H

#include "../Contracts/IOperation.h"

class AggregateProd : public IOperation
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_AGGREGATE_PROD_H

