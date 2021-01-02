#ifndef _MAP_INC_H
#define _MAP_INC_H

#include "../Contracts/IOperation.h"

class MapInc : public IOperation
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_MAP_INC_H

