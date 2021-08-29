// kode3.12.cpp
// dikompilasi dengan kode3.11.cpp
#include <iostream>
#include <cstdlib>		// untuk rand() dan srand()
#include <ctime>		// untuk time()
#include "kode3.10.h"
const int MEN_PER_JAM = 60;
bool konsumenbaru(double x); // apakah ada konsumen baru?
int main()
{
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
// menetapkan beberapa hal
srand(time(0)); // inisialisasi acak
cout << "Studi Kasus: ATM Bank YAMARI\n";
cout << "Masukkan ukuran antrian maksimum: ";
int qs;
cin >> qs;
Antrian baris(qs); // baris antrian memuat qs orang
cout << "Masukkan jumlah jam simulasi: ";
int jam; // jam simulasi
cin >> jam;
// simulasi akan berjalan 1 siklus per menit
long btssiklus = MEN_PER_JAM * jam; // # siklus
cout << "Masukkan jumlah rata-rata konsumen per jam: ";
double perjam; // rata-rata tiba per jam
cin >> perjam;
double men_per_kons; // waktu interval rata-rata
men_per_kons = MEN_PER_JAM / perjam;
Item temp; // data konsumen baru
long berbalik = 0; // berbalik pulang karena antrian penuh
long konsumen = 0; // bergabung dengan antrian
long dilayani = 0; // dilayani selama simulasi
long jlh_baris = 0; // panjang baris kumulatif
int waktu_tunggu = 0; // waktu sampai ATM bebas
long waktu_baris = 0; // waktu kumulatif di dalam baris
// menjalankan simulasi
for (int siklus = 0; siklus < btssiklus; siklus++)
{
if (konsumenbaru(men_per_kons)) // konsumen baru
{
if (baris.apapenuh())
berbalik++;
else
{
	konsumen++;
temp.atur(siklus); // siklus = waktu tiba
baris.pengantrian(temp); // menambah pendatang baru ke baris
}
}
if (waktu_tunggu <= 0 && !baris.apakosong())
{
baris.pembuangan (temp); // konsumen berikutnya
waktu_tunggu = temp.pwaktu(); // untuk waktu_tunggu menit
waktu_baris += siklus - temp.kapan();
dilayani++;
}
if (waktu_tunggu > 0)
waktu_tunggu--;
jlh_baris += baris.hitungantri();
}
// melaporkan hasil
if (konsumen > 0)
{
cout << " konsumen diterima: " << konsumen << endl;
cout << " kosnumen dilayani: " << dilayani << endl;
cout << " berbalik: " << berbalik << endl;
cout << " ukuran rata-rata antrian: ";
cout.precision(5);
cout.setf(ios_base::fixed, ios_base::floatfield);
cout.setf(ios_base::showpoint);
cout << (double) jlh_baris / btssiklus << endl;
cout << " waktu tunggu rata-rata: "
<< (double) waktu_baris / dilayani << " menit\n";
}
else
cout << "Tidak ada konsumen!\n";
cout << "Selesai!\n";
return 0;
}
// x = waktu rata-rata, dalam menit, antara konsumen
// nilai balik true jika konsumen muncul menit ini
bool konsumenbaru(double x)
{
return (rand() * x / RAND_MAX < 1);
}