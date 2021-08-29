//**************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana fungsi virtual dan
// variabel pointer kelas basis sebagai parameter formal bekerja.
//**************************************************************

#include <iostream>

#include "kelasTerderivasi.h"


using namespace std;

void panggilTampil(kelasBasis p);

int main()
{
	kelasBasis satu(5);
	kelasTerderivasi dua(3, 15);

	satu.tampil();
    dua.tampil();

	cout << "*** Memanggil fungsi "
         << "panggilTampil ***" << endl;

	panggilTampil(satu); 
    panggilTampil(dua);

	return 0;
}

void panggilTampil(kelasBasis p)  //p adalah parameter nilai
{
    p.tampil();
}