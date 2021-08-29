// kode7.13.cpp
#include <iostream>
const int Limit = 255;
int main()
{
using std::cout;
using std::cin;
using std::endl;
char masukan[Limit];
cout << "Masukkan suatu string untuk diproses getline():\n";
cin.getline(masukan, Limit, '#');
cout << "Berikut adalah masukan anda:\n";
cout << masukan << "\nSelasi dengan fase 1\n";
char ch;
cin.get(ch);
cout << "Karakter-karakter masukan selanjutnya adalah " << ch << endl;
if (ch != '\n')
cin.ignore(Limit, '\n'); // membuang sisa baris
cout << "Masukkan suatu string untuk diproses get():\n";
cin.get(masukan, Limit, '#');
cout << "Berikut adalah masukan anda:\n";
cout << masukan << "\nSelesai dengan fase 2\n";
cin.get(ch);
cout << "Karakter-karakter masukan selanjutnya adalah " << ch << endl;
return 0;
}