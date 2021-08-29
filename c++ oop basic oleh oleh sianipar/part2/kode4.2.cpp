//kode4.2.cpp
#include "kode4.1.h"
#include <iostream>
#include <cstring>
using namespace std;
TabelPemainTennis::TabelPemainTennis (const char * fn, const char * ln, bool ht)
{
strncpy(namapertama, fn, LIM - 1);
namapertama[LIM - 1] = '\0';
strncpy(namaakhir, ln, LIM - 1);
namaakhir[LIM - 1] = '\0';
Tabelmilik = ht;
}
void TabelPemainTennis::Nama() const
{
cout << namaakhir << ", " << namapertama;
}