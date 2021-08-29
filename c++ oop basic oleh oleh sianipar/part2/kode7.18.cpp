// kode7.18.cpp 
#include <iostream> // tidak dibutuhkan oleh kebanyakan sistem
#include <fstream>
#include <iomanip>
#include <cstdlib> // (atau stdlib.h) untuk exit()
inline void makanbaris() { while (std::cin.get() != '\n') continue; }
struct planet
{
char nama[20]; // nama planet
double populasi; // populasinya
double g; // kecepatan gravitasinya
};
const char * file = "planet.dat";
int main()
{
using namespace std;
planet pl;
cout << fixed << right;
// menampilkan isi awal
ifstream fin;
fin.open(file, ios_base::in |ios_base::binary); // file biner
//NOTE: beberapa sistem tidak menerima mode biner ios_base::binary
if (fin.is_open())
{
cout << "Berikut adalah isi asli dari file "
<< file << "\n";
while (fin.read((char *) &pl, sizeof pl))
{
cout << setw(20) << pl.nama << ": "
<< setprecision(0) << setw(12) << pl.populasi
<< setprecision(2) << setw(6) << pl.g << endl;
}
fin.close();
}
// menambahkan data baru
ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
//NOTE: beberapa sistem tidak menerima mode biner ios_base::binary
if (!fout.is_open())
{
cerr << "Tidak bisa membuka file " << file << " untuk keluaran:\n";
exit(EXIT_FAILURE);
}
cout << "Masukkan nama planet (masukkan suatu baris kosong untuk keluar):\n";
cin.get(pl.nama, 20);
while (pl.nama[0] != '\0')
{
makanbaris();
cout << "Masukkan populasi planet: ";
cin >> pl.populasi;
cout << "Masukkan kecepatan gravitasi planet: ";
cin >> pl.g;
makanbaris();
fout.write((char *) &pl, sizeof pl);
cout << "Masukkan nama planet (masukkan suatu baris kosong untuk keluar):\n";
cin.get(pl.nama, 20);
}
fout.close();
// menampilkan file terevisi
fin.clear(); // tidak dibutuhkan untuk beberapa implementasi
fin.open(file, ios_base::in | ios_base::binary);
if (fin.is_open())
{
cout << "Berikut adalah isi baru dari file "
<< file << "\n";
while (fin.read((char *) &pl, sizeof pl))
{
cout << setw(20) << pl.nama << ": "
<< setprecision(0) << setw(12) << pl.populasi
<< setprecision(2) << setw(6) << pl.g << endl;
}
fin.close();
}
cout << "Selesai.\n";
return 0;
}