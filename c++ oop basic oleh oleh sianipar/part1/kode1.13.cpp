//kode1.13.cpp
#include <iostream>
using namespace std;
class kelasku {
int a, b;
public:
// otomatis inline
void awal(int i, int j) { a=i; b=j; }
void tampil() { cout << a << " " << b << "\n"; }
};
int main()
{
kelasku x;
x.awal(10, 20);
x.tampil();
return 0;
}