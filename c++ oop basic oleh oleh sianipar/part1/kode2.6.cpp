// kode2.6.cpp
#include <iostream>
#include "kode2.4.h"

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
total = pengkodean + pembetulan;
// notasi operator 
cout << "pengkodean + pembetulan = ";
total.Tampil();
cout << endl;
Waktu pembetulan_lagi(3, 28);
cout << "Pembetulan waktu lagi = ";
pembetulan_lagi.Tampil();
cout << endl;
total = pembetulan_lagi.operator+(total);
// notasi fungsi
cout << "pembetulan_lagi.operator+(total) = ";
total.Tampil();
cout << endl;
return 0;
}
