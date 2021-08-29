//kode1.12.cpp
#include <iostream>
using namespace std;
class kelasku {
int a, b;
public:
void awal(int i, int j);
void tampil();
};
// menciptakan suatu fungsi inline
inline void kelasku::awal(int i, int j)
{
a = i;
b = j;
}
// menciptakan fungsi inline yang lain
inline void kelasku::tampil()
{
cout << a << " " << b << "\n";
}
int main()
{
kelasku x;
x.awal(10, 20);
x.tampil();
return 0;
}