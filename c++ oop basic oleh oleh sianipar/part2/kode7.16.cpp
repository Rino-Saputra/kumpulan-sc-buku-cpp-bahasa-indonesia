// kode7.16.cpp
#include <iostream> // not dibutuhkan untuk banyak sistem
#include <fstream>
#include <string>
int main()
{
using namespace std;
string namafile;
cout << "Masukkan nama file baru: ";
cin >> namafile;
// menciptakan objek aliran keluaran untuk file baru dan menyebutnya fout
ofstream fout(namafile.c_str());
fout << "Hanya untuk mata anda saja!\n"; // menulis ke file
cout << "Masukkan angka rahasia anda: "; // menulis ke layar
float rahasia;
cin >> rahasia;
fout << "Angka rahasia anda adalah " << rahasia << endl;
fout.close(); // menutup file
// menciptakan objek aliran masukan untuk file baru dan menyebutnya fin
ifstream fin(namafile.c_str());
cout << "Berikut adalah isi dari " << namafile << ":\n";
char ch;
while (fin.get(ch)) // membaca karakter dari file dan
cout << ch; // menulisnya ke layar
cout << "Selesai\n";
fin.close();
return 0;
}