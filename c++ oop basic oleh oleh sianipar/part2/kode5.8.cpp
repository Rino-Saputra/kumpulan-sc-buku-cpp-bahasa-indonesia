// kode5.8.cpp
#include "kode5.7.h"
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
// metode-metode pekerja
// harus mengimplementasikan destruktor virtual, meskipun yang murni
Pekerja::~Pekerja() {}
void Pekerja::Set()
{
cout << "Masukkan nama pekerja: ";
getline(cin, namapenuh);
cout << "Masukkan ID pekerja: ";
cin >> id;
while (cin.get() != '\n')
continue;
}
void Pekerja::Tampil() const
{
cout << "Nama: " << namapenuh << "\n";
cout << "ID Pekerja: " << id << "\n";
}
// metode-metode Pelayan
void Pelayan::Set()
{
Pekerja::Set();
cout << "Masukkan peringkat kemantapan layanan pelayan: ";
cin >> mantap;
while (cin.get() != '\n')
continue;
}
void Pelayan::Tampil() const
{
cout << "Kategori: Pelayan\n";
Pekerja::Tampil();
cout << "Peringkat Kemantapan Layanan: " << mantap << "\n";
}
// metode-metode Penyanyi
char * Penyanyi::pv[] = {"lainnya", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};
void Penyanyi::Set()
{
Pekerja::Set();
cout << "Masukkan angka untuk rentang vokal penyanyi:\n";
int i;
for (i = 0; i < jenisVokal; i++)
{
	cout << i << ": " << pv[i] << " ";
if ( i % 4 == 3)
cout << endl;
}
if (i % 4 != 0)
cout << endl;
cin >> vokal;
while (cin.get() != '\n')
continue;
}
void Penyanyi::Tampil() const
{
cout << "Kategori: Penyanyi\n";
Pekerja::Tampil();
cout << "Rentang vokal: " << pv[vokal] << endl;
}