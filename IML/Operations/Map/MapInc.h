#ifndef _MAP_INC_H
#define _MAP_INC_H

#include "../Contracts/IMap.h"

class MapInc : public IMap
{
public:
	virtual std::vector<double> execute(OperationParam param) override;

	virtual std::string toString() override;
};
#endif // !_MAP_INC_H

