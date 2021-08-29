//******************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana fungsi virtual
// dan parameter formal pointer bekerja.
//******************************************************

#include <iostream>

#include "kelasTerderivasi.h"


using namespace std;

void panggilTampil(kelasBasis *p);

int main()
{
	kelasBasis *q;
	kelasTerderivasi *r;

	q = new kelasBasis(5);
	r = new kelasTerderivasi(3, 15);

	q->tampil();
	r->tampil();

	cout << "*** Memanggil fungsi "
         << "panggilTampil ***" << endl;

	panggilTampil(q); 
    panggilTampil(r);

	return 0;
}

void panggilTampil(kelasBasis *p)
{
    p->tampil();
}