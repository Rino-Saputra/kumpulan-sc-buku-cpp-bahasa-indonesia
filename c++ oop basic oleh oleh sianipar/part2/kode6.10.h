// kode6.10.h 
#include <iostream>
class hrerata_buruk
{
private:
double v1;
double v2;
public:
hrerata_buruk(double a = 0, double b = 0) : v1(a), v2(b){}
void pesan();
};
inline void hrerata_buruk::pesan()
{
std::cout << "hrerata(" << v1 << ", " << v2 <<"): "
<< "argument invalid: a = -b\n";
}
class grerata_buruk
{
public:
double v1;
double v2;
grerata_buruk(double a = 0, double b = 0) : v1(a), v2(b){}
const char * pesan();
};
inline const char * grerata_buruk::pesan()
{
return "argument-argument grerata() harus >= 0\n";
}