// kode1.25.cpp
#include <iostream>
using namespace std;
class kelasku {
int i;
public:
kelasku(int n);
~kelasku();
void atur_i(int n) { i=n; }
int ambil_i() { return i; }
};
kelasku::kelasku(int n)
{
i = n;
cout << "Pengkonstruksian " << i << "\n";
}
kelasku::~kelasku()
{
cout << "Penghancuran " << i << "\n";
}
void f(kelasku ob);
int main()
{
kelasku o(1);
f(o);
cout << "Ini adalah i di dalam main() : ";
cout << o.ambil_i() << "\n";
return 0;
}
void f(kelasku ob)
{
ob.atur_i(2);
cout << "Ini adalah i lokal: " << ob.ambil_i();
cout << "\n";
}