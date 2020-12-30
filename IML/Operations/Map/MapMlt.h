#ifndef _MAP_MLT_H
#define _MAP_MLT_H

#include "../Contracts/IMap.h"

class MapMlt : public IMap
{
public:
	virtual std::vector<double> execute() override;

	virtual std::string toString() override;
};

#endif // !_MAP_MLT_H

