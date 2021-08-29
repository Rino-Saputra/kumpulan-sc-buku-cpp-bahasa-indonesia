// kode3.11.cpp
#include "kode3.10.h"
#include <cstdlib> // (atau stdlib.h) untuk rand()

Antrian::Antrian(int qs) : qsize(qs) 	// menginisialisasi qsize dengan qs
{
depan = belakang = NULL;
items = 0;
}

Antrian::~Antrian()
{
Simpul * temp;
while (depan != NULL) 		// pada saat antrian belum kosong
{
temp = depan; 		// simpan alamat dari item depan
depan = depan->berikutnya;	// mengatur ulang pointer ke item berikutnya
delete temp; 		// menghapus bekas item depan
}
}

bool Antrian::apakosong() const
{
return items == 0;
}

bool Antrian::apapenuh() const
{
return items == qsize;
}
int Antrian::hitungantri() const
{
return items;
}

bool Antrian::pengantrian(const Item & item)
{
if (apapenuh())
return false;
Simpul * tambah = new Simpul; 		// menciptakan simpul
if (tambah == NULL)
return false; 			// keluar jika tidak ada
tambah->item = item; 			// menetapkan pointer-pointer simpul
tambah->berikutnya = NULL;
items++;
if (depan == NULL) 			// jika antrian kosong
depan = tambah; 			// menempatkan item di depan antrian
else
belakang->berikutnya = tambah; 		// menempatkan di belakang
belakang = tambah; 			// titik belakang ke simpul baru
return true;
}

bool Antrian::pembuangan(Item & item)
{
if (depan == NULL)
return false;
item = depan->item; 		// mengatur item menjadi item pertama di dalam antrian
items--;
Simpul * temp = depan; 		// menyimpan lokasi item pertama
depan = depan->berikutnya; 	// mengatur-ulang depan ke item berikutnya
delete temp; 			// menghapus bekas item pertama 
if (items == 0)
belakang = NULL;
return true;
}

void Konsumen::atur(long kapan)
{
waktuproses = rand() % 3 + 1;
tiba = kapan;
}

