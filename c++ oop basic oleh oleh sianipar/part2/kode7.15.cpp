// kode7.15.cpp
#include <iostream>
const int SPJG = 10;
inline void mknbaris() { while (std::cin.get() != '\n') continue; }
int main()
{
using std::cin;
using std::cout;
using std::endl;
char nama[SPJG];
char gelar[SPJG];
cout << "Masukkan nama anda: ";
cin.get(nama,SPJG);
if (cin.peek() != '\n')
cout << "Maaf, ruang kami sudah penuh untuk "
<< nama << endl;
mknbaris();
cout << "Wahai " << nama << ", masukkan gelar anda: \n";
cin.get(gelar,SPJG);
if (cin.peek() != '\n')
cout << "Kami dipaksa untuk memotong gelar anda.\n";
mknbaris();
cout << " nama: " << nama
<< "\ngelar: " << gelar << endl;
return 0;
}