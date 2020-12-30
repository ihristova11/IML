#ifndef _IAGGREGATE_H
#define _IAGGREGATE_H

#include "IOperation.h"
#include "../OperationParam.h"

/// <summary>
/// IAggregate interface exposing common functionality across different aggregation operations.
/// </summary>
class IAggregate : public IOperation
{
public: 
	virtual std::string toString() = 0;

	virtual double execute(OperationParam param) = 0;
};
#endif // !_IAGGREGATE_H

