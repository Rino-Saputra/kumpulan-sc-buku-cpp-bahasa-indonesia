//kode1.34.cpp
#include <iostream>
using namespace std;
class pangkat {
double b;
int e;
double nil;
public:
pangkat(double basis, int eksp);
double cari_pangkat() { return nil; }
};
pangkat::pangkat(double basis, int eksp)
{
b = basis;
e = eksp;
nil = 1;
if(eksp==0) return;
for( ; eksp>0; eksp--) nil = nil * b;
}
int main()
{
pangkat x(4.0, 2), y(2.5, 1), z(5.7, 0);
cout << x.cari_pangkat() << " ";
cout << y.cari_pangkat() << " ";
cout << z.cari_pangkat() << "\n";
return 0;
}