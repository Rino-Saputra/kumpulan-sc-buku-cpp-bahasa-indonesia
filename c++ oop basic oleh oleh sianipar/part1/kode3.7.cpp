// kode3.7.cpp
// dikompilasi dengan kode12.5.cpp
#include <iostream>
#include <cstdlib>		// (atau stdlib.h) untuk rand(), srand()
#include <ctime>		// (atau time.h) untuk time()
#include "kode3.4.h"
const int ArUkur = 10;
const int MaxLen = 81;
int main()
{
using namespace std;
String nama;
cout <<"Hi, siapa nama anda?\n>> ";
cin >> nama;
cout << nama << ", silahkan masukkan sampai " << ArUkur
<< " kalimat pendek <baris kosong untuk keluar>:\n";
String kalimat[ArUkur];
char temp[MaxLen];		// penyimpanan string temporer
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
int total = i; // total # baris yang dibaca
if (total > 0)
{
cout << "Berikut adalah kalimat-kalimat anda:\n";
for (i = 0; i < total; i++)
cout << kalimat[i] << "\n";
// menggunakan pointer untuk menjejak yang terpendek, dan yang urutan pertama secara alphabetikal
String * terpendek = &kalimat[0]; // menginisialisasi dengan objek pertama
String * pertama = &kalimat[0];
for (i = 1; i < total; i++)
{
if (kalimat[i].panjang() < terpendek->panjang())
terpendek = &kalimat[i];
if (kalimat[i] < *pertama) // membandingkan nilai-nilai
pertama = &kalimat[i]; // menugaskan alamat
}
cout << "Kalimat terpendek:\n" << * terpendek << endl;
cout << "Kalimat urutan pertama secara alphabetikal:\n" << * pertama << endl;
srand(time(0));
int pilihan = rand() % total; // pilih indeks secara acak
// menggunakan new untuk menciptakan, menginisialisasi objek String baru
String * favorit = new String(kalimat[pilihan]);
cout << "Kalimat favorit saya:\n" << *favorit << endl;
delete favorit;
}
else
cout << "Sudah selesai, ya?\n";
cout << "Terimakasih.\n";
return 0;
}
