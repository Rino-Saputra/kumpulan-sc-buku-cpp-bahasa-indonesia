// kode6.9.cpp
#include <iostream>
double hrerata(double a, double b);
int main()
{
double x, y, z;
std::cout << "Masukkan dua bilangan: ";
while (std::cin >> x >> y)
{
try { // memulai blok try
z = hrerata(x,y);
} // akhir blok try
catch (const char * s) // memulai handler eksepsi
{
std::cout << s << std::endl;
std::cout << "Masukkan sepasang bilangan yang baru: ";
continue;
} // akhir handler
std::cout << "Rerata harmonik atas " << x << " dan " << y
<< " adalah " << z << std::endl;
std::cout << "Masukkan sepasang bilangan berikutnya <q untuk keluar>: ";
}
std::cout << "Selesai!\n";
return 0;
}
double hrerata(double a, double b)
{
if (a == -b)
throw "argument-argument hrerata() buruk: a = -b tidak diijinkan";
return 2.0 * a * b / (a + b);
}