#ifndef _AGGREGATE_SUM_H
#define _AGGREGATE_SUM_H

#include "../Contracts/IOperation.h"

/// <summary>
/// An operation that sums the elements of a std::vector<double>
/// </summary>
class AggregateSum : public IOperation
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
#endif // !_AGGREGATE_SUM_H

