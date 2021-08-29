// kode4.10.cpp
// dikompilasi dengan kode4.8.cpp
#include <iostream>
#include "kode4.7.h"
const int KLIEN = 4;
const int LEN = 40;
int main()
{
using std::cin;
using std::cout;
using std::endl;
Emas * p_klien[KLIEN];
int i;
for (i = 0; i < KLIEN; i++)
{
char temp[LEN];
long tempnum;
double tempbal;
char jenis;
cout << "Masukkan nama klien: ";
cin.getline(temp, LEN);
cout << "Masukkan nomor rekening klien: ";
cin >> tempnum;
cout << "Masukkan simpanan pembuka: Rp. ";
cin >> tempbal;
cout << "Masukkan 1 untuk rekening Emas atau "
<< "2 untuk rekening EmasPlus: ";
while (cin >> jenis && (jenis != '1' && jenis != '2'))
cout <<"Masukkan 1 atau 2: ";
if (jenis == '1')
p_klien[i] = new Emas(temp, tempnum, tempbal);
else
{
double tmaks, tsuku;
cout << "Masukkan batas simpanan: Rp. ";
cin >> tmaks;
cout << "Masukkan suku bunga "
<< " dalam fraksi pecahan: ";
cin >> tsuku;
p_klien[i] = new EmasPlus(temp, tempnum, tempbal,
tmaks, tsuku);
}
while (cin.get() != '\n')
continue;
}
cout << endl;
for (i = 0; i < KLIEN; i++)
{
p_klien[i]->LihatAkun();
cout << endl;
}
for (i = 0; i < KLIEN; i++)
{
delete p_klien[i]; // membebaskan memori
}
cout << "Selesai.\n";
return 0;
}