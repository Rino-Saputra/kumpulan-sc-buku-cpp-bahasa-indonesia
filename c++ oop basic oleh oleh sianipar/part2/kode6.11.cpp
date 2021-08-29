//kode6.11.cpp
#include <iostream>
#include <cmath> // atau math.h
#include "kode6.10.h"
// prototipe-prototipe fungsi
double hrerata(double a, double b) throw(hrerata_buruk);
double grerata(double a, double b) throw(grerata_buruk);
int main()
{
using std::cout;
using std::cin;
using std::endl;
double x, y, z;
cout << "Masukkan dua bilangan: ";
while (cin >> x >> y)
{
try { // awal blok try
z = hrerata(x,y);
cout << "Rerata harmonik atas " << x << " dan " << y
<< " adalah " << z << endl;
cout << "Rerata geometrik atas " << x << " dan " << y
<< " adalah " << grerata(x,y) << endl;
cout << "Masukkan sepasang bilangan berikutnya <q untuk keluar>: ";
}// akhir blok try 
catch (hrerata_buruk & bg) // awal blok catch
{
bg.pesan();
cout << "Coba lagi.\n";
continue;
}
catch (grerata_buruk & hg)
{
cout << hg.pesan();
cout << "Nilai-nilai yang digunakan: " << hg.v1 << ", "
<< hg.v2 << endl;
cout << "Maaf, anda tidak bisa mencoba lagi.\n";
break;
} // akhir blok catch
}
cout << "Terimakasih!\n";
return 0;
}
double hrerata(double a, double b) throw(hrerata_buruk)
{
if (a == -b)
throw hrerata_buruk(a,b);
return 2.0 * a * b / (a + b);
}
double grerata(double a, double b) throw(grerata_buruk)
{
if (a < 0 || b < 0)
throw grerata_buruk(a,b);
return sqrt(a * b);
}