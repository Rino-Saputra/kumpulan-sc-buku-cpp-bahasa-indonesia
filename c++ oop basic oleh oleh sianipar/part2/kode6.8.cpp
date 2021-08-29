//kode6.8.cpp
#include <iostream>
#include <cfloat> // (atau float.h) untuk DBL_MAX
bool hrerata(double a, double b, double * jwb);
int main()
{
double x, y, z;
std::cout << "Masukkan dua bilangan: ";
while (std::cin >> x >> y)
{
if (hrerata(x,y,&z))
std::cout << "Rerata harmonik atas " << x << " dan " << y
<< " adalah " << z << std::endl;
else
std::cout << "Satu nilai tidak boleh bernilai "
<< "negatif dari nilai lainny - coba lagi.\n";
std::cout << "Masukkan dua bilangan <q untuk keluar>: ";
}
std::cout << "Terimakasih!\n";
return 0;
}
bool hrerata(double a, double b, double * jwb)
{
if (a == -b)
{
	*jwb = DBL_MAX;
return false;
}
else
{
*jwb = 2.0 * a * b / (a + b);
return true;
}
}