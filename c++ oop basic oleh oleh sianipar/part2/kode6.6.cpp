// kode6.6.cpp
#include <iostream>
#include <string>
#include "kode6.5.h"
int main()
{
using std::string;
using std::cin;
using std::cout;
AntrianTP<string> cs(5);
string temp;
while(!cs.apapenuh())
{
cout << "Masukkan nama anda. Anda akan "
"dilayani sesuai dengan urutan waktu tiba.\n"
"nama: ";
cin>>temp;
//std::getline(cin, temp);
cs.pengantrian(temp);
}
cout << "Antrian penuh. Pemrosesan dimulai!\n";
while (!cs.apakosong())
{
cs.pembuangan(temp);
cout << "Sekarang memproses " << temp << "...\n";
}
return 0;
}