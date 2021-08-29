// kode5.3.cpp
#include <iostream>
#include "kode5.1.h"
using std::cin;
using std::cout;
using std::endl;
void set(Pelajar & sa, int n);
const int murid = 3;
const int kuis = 5;
int main()
{
Pelajar ada[murid] =
{Pelajar(kuis), Pelajar(kuis), Pelajar(kuis)};
int i;
for (i = 0; i < murid; ++i)
set(ada[i], kuis);
cout << "\nDaftar Pelajar :\n";
for (i = 0; i < murid; ++i)
cout << ada[i].Nama() << endl;
cout << "\nHasil:";
for (i = 0; i < murid; ++i)
{
cout << endl << ada[i];
cout << "Rerata: " << ada[i].Rerata() << endl;
}
cout << "Selesai.\n";
return 0;
}
void set(Pelajar & sa, int n)
{
cout << "Silahkan masukkan nama pelajar: ";
cin>>sa;
cout << "Silahkan masukkan " << n << " skor kuis:\n";
for (int i = 0; i < n; i++)
cin >> sa[i];
while (cin.get() != '\n')
continue;
}