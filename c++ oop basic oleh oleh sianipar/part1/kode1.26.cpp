// kode1.26.cpp
#include <iostream>
using namespace std;
class kelasku {
int i;
public:
void atur_i(int n) { i=n; }
int ambil_i() { return i; }
};
kelasku f(); // mengembalikan nilai balik berupa objek bertipe kelasku
int main()
{
kelasku o;
o = f();
cout << o.ambil_i() << "\n";
return 0;
}
kelasku f()
{
kelasku x;
x.atur_i(1);
return x;
}