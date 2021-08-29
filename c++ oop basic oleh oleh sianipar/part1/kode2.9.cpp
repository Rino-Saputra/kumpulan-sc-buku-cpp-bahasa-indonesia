// kode2.9.cpp 
#include <iostream>
#include "kode2.7.h"
int main()
{
using std::cout;
using std::endl;
Waktu penanaman(4, 35);
Waktu perawatan(2, 47);
Waktu total;
Waktu selisih;
Waktu diubah;
cout << "waktu penanaman = ";
penanaman.Tampil();
cout << endl;
cout << "waktu perawatan = ";
perawatan.Tampil();
cout << endl;
cout << "total waktu kerja = ";
total = penanaman + perawatan; 		// menggunakan operator+()
total.Tampil();
cout << endl;
selisih = penanaman - perawatan; 		// menggunakan operator-()
cout << "waktu penanaman - waktu perawatan = ";
selisih.Tampil();
cout << endl;
diubah = total * 1.5; 			// menggunakan operator*()
cout << "waktu kerja yang diubah = ";
diubah.Tampil();
cout << endl;
return 0;
}
