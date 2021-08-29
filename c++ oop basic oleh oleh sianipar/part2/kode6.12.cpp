//kode6.12.cpp
#include <iostream>
#include <cmath> // atau math.h
#include <cstring>
#include "kode6.10.h"
class demo
{
private:
char kata[40];
public:
demo (const char * str)
{
strcpy(kata, str);
std::cout << "demo " << kata << " diciptakan\n";
}
~demo()
{
std::cout << "demo " << kata << " dihancurkan\n";
}
void tampil() const
{
std::cout << "demo " << kata << " hidup!\n";
}
};
// prototipe-prototipe fungsi
double hrerata(double a, double b) throw(hrerata_buruk);
double grerata(double a, double b) throw(grerata_buruk);
double rerata(double a, double b) throw(hrerata_buruk, grerata_buruk);
int main()
{
using std::cout;
using std::cin;
using std::endl;
double x, y, z;
demo d1("ditemukan di dalam main()");
cout << "Masukkan dua bilangan: ";
while (cin >> x >> y)
{
try { // awal blok try
z = rerata(x,y);
cout << "Rerata atas " << x << " dan " << y
<< " adalah " << z << endl;
cout << "Masukkan sepasang angka berikutnya: ";
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
d1.tampil();
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
double rerata(double a, double b) throw(hrerata_buruk, grerata_buruk)
{
	double am, hm, gm;
demo d2("ditemukan di dalam rerata()");
am = (a + b) / 2.0; // rerata aritmatik
try
{
hm = hrerata(a,b);
gm = grerata(a,b);
}
catch (hrerata_buruk & bg) // awal blok catch
{
bg.pesan();
std::cout << "Ditangkap di dalam rerata()\n";
throw; // melempar-ulang eksepsi
}
d2.tampil();
return (am + hm + gm) / 3.0;
}