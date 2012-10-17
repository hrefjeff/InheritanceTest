#include "Quadruple.h"
#include <string>
const string STARS = "****";
int main(){

	Pair one;
	cout << STARS << endl;
	
	Pair two(1,3);
	cout << STARS << endl;
	
	one.Print(cout); cout << endl;
	cout << STARS << endl;
	
	two.Print(cout); cout << endl;	
	cout << STARS << endl;
	
	Triple hey;
	cout << STARS << endl;
	
	Triple four(10,20,30);
	cout << STARS << endl;
	
	hey.Print(cout); cout << endl;
	cout << STARS << endl;
	
	four.Print(cout); cout << endl;

	Quadruple six;

	Quadruple seven(10,20,30,40);
	cout << STARS << endl;

	seven.Print(cout); cout << endl;

	Pair* arr[6];

	arr[0] = new Pair(1,2);
	arr[1] = new Pair(3,4);
	arr[2] = new Triple(40,50,60);
	arr[3] = new Triple(70,80,90);
	arr[4] = new Quadruple(100,200,300,400);
	arr[5] = new Quadruple(500,600,700,800);

	for(int i=0; i<=5; i++) {
		arr[i]->Print(cout);
		cout << endl;
	}

	cout << STARS << endl;

	Pair* test = new Pair(7,9);
	test->Print(cout);
	*test = Pair(5,9);
	test->Print(cout);
	test = new Pair(7,8);
	test->Print(cout);

	system("PAUSE");
	return 0;
	

}