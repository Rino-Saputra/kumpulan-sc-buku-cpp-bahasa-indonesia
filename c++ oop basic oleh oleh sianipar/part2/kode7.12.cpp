// kode7.12.cpp
#include <iostream>
#include <exception>
int main()
{
using namespace std;
// memiliki failbit yang menyebabkan suatu eksepsi dilempar
cin.exceptions(ios_base::failbit);
cout << "Masukkan angka-angka: ";
int jumlah = 0;
int masukan;
try {
while (cin >> masukan)
{
jumlah += masukan;
}
} catch(ios_base::failure & bf)
{
cout << bf.what() << endl;
cout << "O! menakutkan!\n";
}
cout << "Nilai terakhir yang dimasukkan = " << masukan << endl;
cout << "Jumlah = " << jumlah << endl;
return 0;
}