// kode7.6.cpp
#include <iostream>
int main()
{
using std::cout;
float harga1 = 20.40;
float harga2 = 1.9 + 8.0 / 9.0;
cout << "\"Harga biasa\" adalah Rp. " << harga1 << "!\n";
cout << "\"Harga sahabat\" adalah Rp. " << harga2 << "!\n";
cout.precision(2);
cout << "\"Harga biasa\" adalah Rp. " << harga1 << "!\n";
cout << "\"Harga sahabat\" adalah Rp. " << harga2 << "!\n";
return 0;
}