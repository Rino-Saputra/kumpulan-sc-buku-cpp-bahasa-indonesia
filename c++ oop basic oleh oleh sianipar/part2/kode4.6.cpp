// kode4.6.cpp
#include <iostream>
#include "kode4.4.h"
int main ( void )
{
using std::cout;
using std::endl;
TabelPemainTennis pemain1("Oppung", "Marolop", false);
PemainSenior dpemain1(1140,"Oppung", "Sintong", true);
dpemain1.Nama(); // objek terderivasi menggunakan metode kelas basis
if (dpemain1.TabelMilik())
cout << ": memiliki tabel.\n";
else
cout << ": tidak memiliki tabel.\n";
pemain1.Nama(); // objek basis menggunakan metode kelas basis
if (pemain1.TabelMilik())
cout << ": memiliki tabel";
else
cout << ": tidak memiliki tabel.\n";
cout << "Nama: ";
dpemain1.Nama();
cout << "; Peringkat: " << dpemain1.Peringkat() << endl;
PemainSenior dpemain2(1212, pemain1);
cout << "Nama: ";
dpemain2.Nama();
cout << "; Peringkat: " << dpemain2.Peringkat() << endl;
return 0;
}
