// kode7.19.cpp
#include <iostream> // tidak dibutuhkan oleh kebanyakan sistem
#include <fstream>
#include <iomanip>
#include <cstdlib> // (atau stdlib.h) untuk exit()
const int LIM = 20;
struct planet
{
char nama[LIM]; // nama  planet
double populasi; // populasinya
double g; // kecepatan gravitasinya
};
const char * file = "planet.dat"; // DIASSUMSIKAN SUDAH ADA (contoh kode16.18.cpp)
inline void makanbaris() { while (std::cin.get() != '\n') continue; }
int main()
{
using namespace std;
planet pl;
cout << fixed;
// menampilkan konten awal
fstream finout; // membaca dan menulis aliran
finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
//NOTE: Beberapa sistem Unix meniadakan | ios::binary
int ct = 0;
if (finout.is_open())
{
finout.seekg(0); // pergi ke awal file
cout << "Berikut adalah isi saat ini dari file "
<< file << "\n";
while (finout.read((char *) &pl, sizeof pl))
{
cout << ct++ << ": " << setw(LIM) << pl.nama << ": "
<< setprecision(0) << setw(12) << pl.populasi
<< setprecision(2) << setw(6) << pl.g << endl;
}
if (finout.eof())
finout.clear(); // meng-nol-kan flag eof
else
{
cerr << "Error dalam pembacaan " << file << ".\n";
exit(EXIT_FAILURE);
}
}
else
{
cerr << file << " tidak bisa dibuka -- terimakasih.\n";
exit(EXIT_FAILURE);
}
// merekam suatu rekaman
cout << "Masukkan nomor rekaman yang ingin anda ubah: ";
long rek;
cin >> rek;
makanbaris(); // menghindari garis-baru
if (rek < 0 || rek >= ct)
{
cerr << "Nomor rekaman tidak valid-- terimakasih\n";
exit(EXIT_FAILURE);
}
streampos place = rek * sizeof pl; // mengkonversi menjadi tipe streampos
finout.seekg(place); // akses acak
if (finout.fail())
{
cerr << "Error dalam melakukan seek\n";
exit(EXIT_FAILURE);
}
finout.read((char *) &pl, sizeof pl);
cout << "Pilihan anda:\n";
cout << rek << ": " << setw(LIM) << pl.nama << ": "
<< setprecision(0) << setw(12) << pl.populasi
<< setprecision(2) << setw(6) << pl.g << endl;
if (finout.eof())
finout.clear(); // meng-nol-kan flag eof
cout << "Masukkan nama planet: ";
cin.get(pl.nama, LIM);
makanbaris();
cout << "Masukkan populasi planet: ";
cin >> pl.populasi;
cout << "Masukkan kecepatan gravitasi planet: ";
cin >> pl.g;
finout.seekp(place); // kembali ke awal
finout.write((char *) &pl, sizeof pl) << flush;
if (finout.fail())
{
cerr << "Error pada saat mencoba menulis\n";
exit(EXIT_FAILURE);
}
// menampilkan file terevisi
ct = 0;
finout.seekg(0); // kembali ke awal file
cout << "Berikut adalah isi baru dari file " << file
<< "\n";
while (finout.read((char *) &pl, sizeof pl))
{
cout << ct++ << ": " << setw(LIM) << pl.nama << ": "
<< setprecision(0) << setw(12) << pl.populasi
<< setprecision(2) << setw(6) << pl.g << endl;
}
finout.close();
cout << "Selesai.\n";
return 0;
}