#ifndef _IMAP_H
#define _IMAP_H

#include "IOperation.h"
#include <vector>

class IMap : public IOperation
{
public:
	virtual std::vector<double> execute() = 0;

	virtual std::string toString() = 0;
};
#endif // !_IMAP_H

