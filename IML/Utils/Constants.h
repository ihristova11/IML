#ifndef _CONSTANTS_H
#define _CONSTANTS_H

#include <string>

/// <summary>
/// Namespace containing string constants returned in the process of command execution
/// </summary>
namespace Constants
{
	// MAP
	const std::string MapIncrementCommandName = "MAP-INC";
	const std::string MapMultiplyCommandName = "MAP-MLT";

	// AGGREGATE
	const std::string AggregateSumCommandName = "AGG-SUM";
	const std::string AggregateProductCommandName = "AGG-PRO";
	const std::string AggregateAverageCommandName = "AGG-AVG";
	const std::string AggregateFirstCommandName = "AGG-FST";
	const std::string AggregateLastCommandName = "AGG-LST";

	// SORT
	const std::string ReverseCommandName = "SRT-REV";
	const std::string OrderCommandName = "SRT-ORD";
	const std::string SubListCommandName = "SRT-SLC";
	const std::string RemoveDuplicatesCommandName = "SRT-DST";
}
#endif // !_CONSTANTS_H
