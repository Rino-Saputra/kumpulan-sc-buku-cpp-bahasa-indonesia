//***********************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana mengalokasikan memori
// dinamis menggunakan sebuah variabel pointer dan bagaimana 
// memanipulasi data.
//***********************************************************

#include <iostream>

using namespace std;

int main()
{
	int *p; 
    int *q;

	p = new int;
	*p = 34;
	cout << "Baris 9: p = " << p
         << ", *p = " << *p << endl;

	q = p;
	cout << "Baris 11: q = " << q
    << ", *q = " << *q << endl;

	*q = 45;
	cout << "Baris 13: p = " << p
         << ", *p = " << *p << endl;

	cout << "Baris 14: q = " << q
         << ", *q = " << *q << endl;

	p = new int;
	*p = 18;
	cout << "Baris 17: p = " << p
         << ", *p = " << *p << endl;
	cout << "Baris 18: q = " << q
         << ", *q = " << *q << endl;

	delete q;  
    q = NULL;
	q = new int; 
    *q = 62;
	cout << "Baris 23: p = " << p
         << ", *p = " << *p << endl;
	cout << "Baris 24: q = " << q
         << ", *q = " << *q << endl;

	return 0;
}

