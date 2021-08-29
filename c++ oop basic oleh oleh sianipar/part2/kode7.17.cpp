// kode7.17.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // (atau stdlib.h) untuk exit()
const char * file = "tamu.txt";
int main()
{
using namespace std;
char ch;
// menampilkan isi awal
ifstream fin;
fin.open(file);
if (fin.is_open())
{
cout << "Berikut adalah isi awal "
<< file << " file:\n";
while (fin.get(ch))
cout << ch;
fin.close();
}
// menambah nama-nama baru
ofstream fout(file, ios::out | ios::app);
if (!fout.is_open())
{
cerr << "Tidak bisa membuka " << file << " file untu keluaran.\n";
exit(EXIT_FAILURE);
}
cout << "Masukkan nama-nama tamu (masukkan suatu baris kosong untuk keluar):\n";
string nama;
while (getline(cin,nama) && nama.size() > 0)
{
fout << nama << endl;
}
fout.close();
// menampilkan file terevisi
fin.clear(); // tidak perlu bagi beberapa kompiler
fin.open(file);
if (fin.is_open())
{
cout << "Berikut adalah isi yang baru dari "
<< file << " file:\n";
while (fin.get(ch))
cout << ch;
fin.close();
}
cout << "Selesai.\n";
return 0;
}