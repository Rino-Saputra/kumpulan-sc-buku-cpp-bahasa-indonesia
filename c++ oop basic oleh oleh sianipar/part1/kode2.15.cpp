// kode2.15.cpp 

#include <iostream>
#include <cstdlib>		// prototipe rand(), srand()
#include <ctime>		// prototipe time()
#include "kode2.13.h"
int main()
{
using namespace std;
using VEKTOR::Vektor;
srand(time(0));			// benih pembangkit bilangan acak
double arah;
Vektor langkah;
Vektor hasil(0.0, 0.0);
unsigned long langkah2 = 0;
double target;
double dlangkah;
cout << "Masukkan jarak target (q untuk keluar): ";
while (cin >> target)
{
cout << "Masukkan panjang langkah: ";
if (!(cin >> dlangkah))
break;
while (hasil.magval() < target)
{
	arah = rand() % 360;
langkah.set(dlangkah, arah, 'p');
hasil = hasil + langkah;
langkah2++;
}
cout << "Setelah " << langkah2 << " langkah, Subjek "
"memiliki lokasi berikut ini:\n";
cout << hasil << endl;
hasil.polar_mode();
cout << " atau\n" << hasil << endl;
cout << "Rata-rata jarak per langkah = "
<< hasil.magval()/langkah2 << endl;
langkah2 = 0;
hasil.set(0.0, 0.0);
cout<<endl;
cout << "Masukkan jarak target (q untuk keluar): ";
}
cout << "Selesai!\n";
return 0;
}