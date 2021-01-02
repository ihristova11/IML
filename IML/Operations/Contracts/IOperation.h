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
	/// <summary>
	/// toString() implementation on operation class
	/// </summary>
	/// <returns>the operation name</returns>
	virtual std::string toString() = 0;

	/// <summary>
	/// contains command specific execution logic
	/// </summary>
	/// <param name="param">OperationParam</param>
	/// <returns>std::vector<double> with the execution result</returns>
	virtual std::vector<double> execute(OperationParam param) = 0;
};
#endif // !_IOPERATION_H

