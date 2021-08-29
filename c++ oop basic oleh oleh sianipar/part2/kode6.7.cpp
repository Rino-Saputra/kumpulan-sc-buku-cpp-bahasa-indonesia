//kode6.7.cpp
#include <iostream>
#include <cstdlib>
double hrerata(double a, double b);
int main()
{
double x, y, z;
std::cout << "Masukkan dua bilangan: ";
while (std::cin >> x >> y)
{
z = hrerata(x,y);
std::cout << "Reraya harmonik atas  "<< x << " dan " << y << " adalah " << z << std::endl;
std::cout << "Masukkan dua bilangan selanjutnya <q untuk keluar>: ";
}
std::cout << "Terimakasih!\n";
return 0;
}
double hrerata(double a, double b)
{
if (a == -b)
{
std::cout << "Argument-argument yang tidak bisa dipakai untuk menghitung hrerata()\n";
abort();
}
return 2.0 * a * b / (a + b);
}