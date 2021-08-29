// kode7.11.cpp
#include <iostream>
int main()
{
using namespace std;
cout << "Masukkan angka-angka: ";
int jumlah = 0;
int masukan;
while (cin >> masukan)
{
jumlah += masukan;
}
cout << "Nilai terakhir yang dimasukkan = " << masukan << endl;
cout << "Jumlah = " << jumlah << endl;
return 0;
}