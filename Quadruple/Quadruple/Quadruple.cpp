#include "Quadruple.h"

Quadruple::Quadruple(): Triple(), quad(0){cout << "QUADRUPLE DEFAULT" << endl;}

Quadruple::Quadruple(int a,int b,int c, int d):Triple(a,b,c), quad(d){ cout << "QUADRUPLE DATA" << endl;}

void Quadruple::SetQuad(int d) {
	
		quad = d;

}

void Quadruple::Set(int a, int b, int c, int d) { 
		x = a;
		y = b;
		z = c;
		quad = d;
}

int Quadruple::GetQuad()const {

		return quad;

}

void Quadruple::Print(ostream& os) {
		Triple::Print(os);
			os <<"," << quad;

}