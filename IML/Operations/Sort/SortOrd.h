#ifndef _SORT_ORD_H
#define _SORT_ORD_H

#include "../Contracts/IOperation.h"
#include <algorithm>

/// <summary>
/// An operation that orders a std::vector<double> ascending/descending
/// </summary>
class SortOrd : public IOperation
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
#endif // !_SORT_ORD_H

