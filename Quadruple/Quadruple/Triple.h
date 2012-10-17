#ifndef _TRIPLE_H
#define _TRIPLE_H

#include "Pair.h"

class Triple : public Pair{
protected:
	int z;
public:
	Triple();
	Triple(int,int,int);
	void SetZ(int);
	void Set(int, int, int);
	int GetZ()const;
	void Print(ostream&);

};
#endif