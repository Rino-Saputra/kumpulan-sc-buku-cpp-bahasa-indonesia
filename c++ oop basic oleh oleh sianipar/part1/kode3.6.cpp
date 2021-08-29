//kode3.6.cpp
#include <iostream>
#include "kode3.4.h"
const int ArUkur = 10;
const int MaxLen =81;
int main()
{
using std::cout;
using std::cin;
using std::endl;
String nama;
cout <<"Hi, siapa nama anda?\n>> ";
cin >> nama;
cout << nama << ", silahkan masukkan " << ArUkur
<< " kalimat pendek <baris kosong untuk keluar>:\n";
String kalimat[ArUkur];			// array objek
char temp[MaxLen]; // penyimpanan string temporer
int i;
for (i = 0; i < ArUkur; i++)
{
cout << i+1 << ": ";
cin.get(temp, MaxLen);
while (cin && cin.get() != '\n')
continue;
if (!cin || temp[0] == '\0') // baris kosong?
break; // i tidak diinkrement
else
kalimat[i] = temp; // penugasan teroverload
}
int total = i; // total baris yang dibaca
cout << "Berikut adalah kalimat-kalimat anda:\n";
for (i = 0; i < total; i++)
cout << kalimat[i][0] << ": " << kalimat[i] << endl;
int terpendek = 0;
int pertama = 0;
for (i = 1; i < total; i++)
{
if (kalimat[i].panjang() < kalimat[terpendek].panjang())
terpendek = i;
if (kalimat[i] < kalimat[pertama])
pertama = i;
}
cout << "Kalimat terpendek:\n" << kalimat[terpendek] << endl;;
cout << "Yang urutan pertama secara alphabetikal:\n" << kalimat[pertama] << endl;
cout << "Program ini menggunakan "<< String::BrpBanyak()
<< " objek String. Terimakasih.\n";
return 0;
}