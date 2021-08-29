// kode5.11.cpp 
#include "kode5.10.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// metode-metode Pekerja 
Pekerja::~Pekerja() { }
// metode-metode terproteksi
void Pekerja::Data() const
{
cout << "Nama: " << namapenuh << endl;
cout << "ID Pekerja: " << id << endl;
}
void Pekerja::Get()
{
cin>> namapenuh;
cout << "Masukkan ID Pekerja: ";
cin >> id;
while (cin.get() != '\n')
continue;
}
// metode-metode Pelayan
void Pelayan::Set()
{
cout << "Masukkan nama Pelayan: ";
Pekerja::Get();
Get();
}
void Pelayan::Tampil() const
{
cout << "Kategori: Pelayan\n";
Pekerja::Data();
Data();
}
// metode-metode terproteksi
void Pelayan::Data() const
{
cout << "Peringkat kemantapan: " << mantap << endl;
}
void Pelayan::Get()
{
cout << "Masukkan peringkat kemantapan Pelayan: ";
cin >> mantap;
while (cin.get() != '\n')
continue;
}
// metode-metode Penyanyi
char * Penyanyi::pv[Penyanyi::jenisVokal] = {"lainnya", "alto", "contralto",
"soprano", "bass", "baritone", "tenor"};
void Penyanyi::Set()
{
cout << "Masukkan nama Penyanyi: ";
Pekerja::Get();
Get();
}
void Penyanyi::Tampil() const
{
cout << "Kategori: Penyanyi\n";
Pekerja::Data();
Data();
}
// metode-metode terproteksi
void Penyanyi::Data() const
{
cout << "Rentang vokal: " << pv[vokal] << endl;
}
void Penyanyi::Get()
{
cout << "Masukkan nilai rentang vokal Penyanyi:\n";
int i;
for (i = 0; i < jenisVokal; i++)
{
cout << i << ": " << pv[i] << " ";
if ( i % 4 == 3)
cout << endl;
}
if (i % 4 != 0)
cout << '\n';
cin >> vokal;
while (cin.get() != '\n')
continue;
}
// metode-metode PelayanBernyanyi
void PelayanBernyanyi::Data() const
{
Penyanyi::Data();
Pelayan::Data();
}
void PelayanBernyanyi::Get()
{
Pelayan::Get();
Penyanyi::Get();
}
void PelayanBernyanyi::Set()
{
cout << "Masukkan nama pelayan bernyanyi: ";
Pekerja::Get();
Get();
}
void PelayanBernyanyi::Tampil() const
{
cout << "Kategori: pelayan bernyanyi\n";
Pekerja::Data();
Data();
}

