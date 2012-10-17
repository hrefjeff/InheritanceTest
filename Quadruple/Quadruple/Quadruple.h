#ifndef _QUADRUPLE_H
#define _QUADRUPLE_H

#include "Triple.h"
#include "Pair.h"

class Quadruple : public Triple {
	int quad;
public:
	Quadruple();
	Quadruple(int,int,int,int);
	void SetQuad(int);
	void Set(int, int, int, int);
	int GetQuad()const;
	void Print(ostream&);

};
#endif