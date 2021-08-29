//kode6.3.cpp
#include <iostream>
#include "kode6.4.h"
int main()
{
using std::cout;
Tv s27;
cout << "Pengaturan awal untuk TV 27\" :\n";
s27.pengaturan();
s27.HidupMati();
s27.kanNaik();
cout << "\nPengaturan yang telah diubah untuk TV 27\" :\n";
s27.pengaturan();
Remote abu_abu;
abu_abu.atur_kan(s27, 10);
abu_abu.volnaik(s27);
abu_abu.volnaik(s27);
cout << "\nPengaturan 27\" setelah menggunakan remote:\n";
s27.pengaturan();
Tv s32(Tv::Hidup);
s32.atur_mode();
abu_abu.atur_kan(s32,28);
cout << "\nPengaturan 32\" :\n";
s32.pengaturan();
return 0;
}