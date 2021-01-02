#ifndef _SORT_REV_H
#define _SORT_REV_H

#include "../Contracts/IOperation.h"

/// <summary>
/// An operation reversing a std::vector<double>
/// </summary>
class SortRev : public IOperation
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

#endif // !_SORT_REV_H

