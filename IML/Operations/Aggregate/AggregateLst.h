#ifndef _AGGREGATE_LST_H
#define _AGGREGATE_LST_H

#include "../Contracts/IOperation.h"

class AggregateLst : public IOperation	
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};

#endif // !_AGGREGATE_LST_H
