// kode6.5.h
#ifndef KODE6_5_H_
#define KODE6_5_H_
template <class Item>
class AntrianTP
{
private:
enum {Q_SIZE = 10};
// Simpul adalah suatu kelas tertingkat
class Simpul
{
public:
Item item;
Simpul * berikutnya;
Simpul(const Item & i):item(i), berikutnya(0){ }
};
Simpul * depan; // pointer menunjuk ke depan Antrian
Simpul * belakang; // pointer menunjuk ke belakang Antrian
int items; // jumlah item saat ini di dalam Antrian
const int qsize; // jumlah item maksimum di dalam Antrian
AntrianTP(const AntrianTP & q) : qsize(0) {}
AntrianTP & operator=(const AntrianTP & q) { return *this; }
public:
AntrianTP(int qs = Q_SIZE);
~AntrianTP();
bool apakosong() const
{
return items == 0;
}
bool apapenuh() const
{
return items == qsize;
}
int hitungantri() const
{
return items;
}
bool pengantrian(const Item &item); // menambah item ke akhir
bool pembuangan(Item &item); // membuang item dari depan
};
// metode-metode AntrianTP 
template <class Item>
AntrianTP<Item>::AntrianTP(int qs) : qsize(qs)
{
depan = belakang = 0;
items = 0;
}
template <class Item>
AntrianTP<Item>::~AntrianTP()
{
	Simpul * temp;
while (depan != 0) // saat antrian belum kosong
{
temp = depan; // menyimpan alamat item depan
depan = depan->berikutnya;// mereset pointer menunjuk ke item berikutnya
delete temp; // menghapus bekas depan
}
}
// Menambah item ke antrian
template <class Item>
bool AntrianTP<Item>::pengantrian(const Item & item)
{
if (apapenuh())
return false;
Simpul * tambah = new Simpul(item); // menciptakan simpul
if (tambah == NULL)
return false; // keluar jika tidak ada
items++;
if (depan == 0) // jika antrian kosong,
depan = tambah; // menempatkan item di depan
else
belakang->berikutnya = tambah; // menempatkan item di belakang
belakang = tambah; // membuat titik belakang ke simpul baru
return true;
}
// Menempatkan item depan ke dalam variabel item dan membuang dari antrian
template <class Item>
bool AntrianTP<Item>::pembuangan(Item & item)
{
if (depan == 0)
return false;
item = depan->item; // menetapkan item menjadi item pertama di dalam antrian
items--;
Simpul * temp = depan; // menyimpan lokasi item pertama
depan = depan->berikutnya; // mereset depan ke item berikutnya
delete temp; // menghapus bekas item pertama
if (items == 0)
belakang = 0;
return true;
}
#endif