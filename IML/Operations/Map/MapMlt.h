#ifndef _MAP_MLT_H
#define _MAP_MLT_H

#include "../Contracts/IOperation.h"

/// <summary>
/// An operation that multiplies the elements of a std::vector<double> with a double number
/// </summary>
class MapMlt : public IOperation
{
public:
	/// <summary>
	/// contains command specific execution logic
	/// </summary>
	/// <param name="param">OperationParam</param>
	/// <returns>std::vector<double> with the execution result</returns>
	virtual std::vector<double> execute(OperationParam param) override;

	/// <summary>
	/// toString() implementation on operation class
	/// </summary>
	/// <returns>the operation name</returns>
	virtual std::string toString() override;
};

#endif // !_MAP_MLT_H

