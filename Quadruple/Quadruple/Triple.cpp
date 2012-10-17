#include "Triple.h"

Triple::Triple(): Pair(), z(){cout << "TRIPLE DEFAULT" << endl;}

Triple::Triple(int a,int b,int c):Pair(a,b), z(c){ cout << "TRIPLE DATA" << endl;}


void Triple::SetZ(int c){
	z = c;
}
void Triple::Set(int a, int b, int c){
	x = a;
	y = b;
	z = c;
}
int Triple::GetZ()const{
	return z;
}
void Triple::Print(ostream& os){
	Pair::Print(os);
	os << "," << z;
}