#ifndef _PAIR_H
#define _PAIR_H

#include <iostream>
using namespace std;

class Pair{
protected:
	int x;
	int y;
public:
	Pair();
	Pair(int a, int b);
	void SetX(int);
	void SetY(int);
	void Set(int,int);
	int GetX()const;
	int GetY()const;
	virtual void Print(ostream&);   //Virtual is a type of late binding.
									//Looks at the object, not the pointer.
};
#endif