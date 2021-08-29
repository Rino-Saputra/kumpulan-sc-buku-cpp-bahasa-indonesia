// kode4.3.cpp
#include <iostream>
#include "kode4.1.h"
int main ( void )
{
using std::cout;
TabelPemainTennis pemain1("Poltak", "Haposan", true);
TabelPemainTennis pemain2("Ronggur", "Raja", false);
pemain1.Nama();
if (pemain1.TabelMilik())
cout << ": memiliki tabel.\n";
else
cout << ": tidak memiliki tabel.\n";
pemain2.Nama();
if (pemain2.TabelMilik())
cout << ": memiliki tabel";
else
cout << ": tidak memiliki tabel.\n";
return 0;
}