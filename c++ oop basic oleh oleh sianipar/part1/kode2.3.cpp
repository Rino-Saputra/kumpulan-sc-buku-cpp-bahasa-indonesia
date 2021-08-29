// kode2.3.cpp
#include <iostream>
#include "kode2.1.h"

int main()
{
using std::cout;
using std::endl;
Waktu perencanaan;
Waktu pengkodean(2, 40);
Waktu pembetulan(5, 55);
Waktu total;
cout << "perencanaan Waktu = ";
perencanaan.Tampil();
cout << endl;
cout << "pengkodean Waktu = ";
pengkodean.Tampil();
cout << endl;
cout << "pembetulan Waktu = ";
pembetulan.Tampil();
cout << endl;
total = pengkodean.Jumlah(pembetulan);
cout << "pengkodean.Jumlah(pembetulan) = ";
total.Tampil();
cout << endl;
return 0;
}
