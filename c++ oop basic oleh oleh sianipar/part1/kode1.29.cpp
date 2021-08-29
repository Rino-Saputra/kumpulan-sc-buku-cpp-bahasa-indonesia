//kode1.29.cpp
#include <iostream>
using namespace std;
class cl {
int i;
public:
cl(int j) { i=j; }		// konstruktor
int ambil_i() { return i; }
};
int main()
{
cl ob[3] = {1, 2, 3}; // penginisialisasi
int i;
for(i=0; i<3; i++)
cout << ob[i].ambil_i() << "\n";
return 0;
}