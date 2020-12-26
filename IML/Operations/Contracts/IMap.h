#ifndef _IMAP_H
#define _IMAP_H

#include "IOperation.h"
#include <vector>

/// <summary>
/// IMap interface exposing common functionality across different mapping operations.
/// </summary>
class IMap : public IOperation
{
public:
	virtual std::vector<double> execute() = 0;

	virtual std::string toString() = 0;
};
#endif // !_IMAP_H

