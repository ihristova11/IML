#ifndef _ISORT_H
#define _ISORT_H

#include "IOperation.h"
#include "../OperationParam.h"

#include <vector>

/// <summary>
/// ISort interface exposing common functionality across different sorting operations.
/// </summary>
class ISort : public IOperation
{
public: 
	virtual std::string toString() = 0;
	
	virtual std::vector<double> execute(OperationParam param) = 0;
};
#endif // !_ISORT_H

