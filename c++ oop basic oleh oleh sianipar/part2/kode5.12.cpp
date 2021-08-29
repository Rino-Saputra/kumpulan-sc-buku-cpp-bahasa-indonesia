// kode5.12.cpp
// dikompilasi dengan kode5.11.cpp
#include <iostream>
#include <cstring>
#include "kode5.10.h"
const int UKURAN = 5;
int main()
{
using std::cin;
using std::cout;
using std::endl;
//using std::strchr;
Pekerja * lolas[UKURAN];
int ct;
for (ct = 0; ct < UKURAN; ct++)
{
char pilihan;
cout << "Masukkan kategori pekerja:\n"
<< "w: pelayan s: penyanyi "
<< "t: pelayan bernyanyi q: keluar\n";
cin >> pilihan;
while (strchr("wstq", pilihan) == NULL)
{
cout << "Silahkan ketik w, s, t, atau q: ";
cin >> pilihan;
}
if (pilihan == 'q')
break;
switch(pilihan)
{
case 'w': lolas[ct] = new Pelayan;
break;
case 's': lolas[ct] = new Penyanyi;
break;
case 't': lolas[ct] = new PelayanBernyanyi;
break;
}
cin.get();
lolas[ct]->Set();
}
cout << "\nBerikut adalah staff anda:\n";
int i;
for (i = 0; i < ct; i++)
{
cout << endl;
lolas[i]->Tampil();
}
for (i = 0; i < ct; i++)
delete lolas[i];
cout << "Terimakasih.\n";
return 0;
}