#include "Pair.h"

Pair::Pair():x(0), y(0){cout << "PAIR DEFAULT" << endl;}

Pair::Pair(int a, int b):x(a),y(b){ cout << "PAIR DATA" << endl;}


void Pair::SetX(int a){
	x = a;
}

void Pair::SetY(int b){
	y = b;
}

void Pair::Set(int a,int b){
	SetX(a);
	SetY(b);
}

int Pair::GetX()const{
	return x;
}

int Pair::GetY()const{
	return y;
}

void Pair::Print(ostream& os){
	os << x << "," << y;
}
