#ifndef _IOPERATION_H
#define _IOPERATION_H

#include <string>
#include <vector>
#include "../OperationParam.h"

/// <summary>
/// IOperation interface exposing common functionality across different operations.
/// </summary>
class IOperation
{
public: 
	virtual std::string toString() = 0;

	virtual std::vector<double> execute(OperationParam param) = 0;	
};
#endif // !_IOPERATION_H

