//kode1.24.cpp
#include <iostream>
using namespace std;
void f();
int main()
{
f();
// kelasku tidak dikenal di sini
return 0;
}
void f()
{
class kelasku {
int i;
public:
void letak_i(int n) { i=n; }
int ambil_i() { return i; }
} ob;
ob.letak_i(10);
cout << ob.ambil_i() << endl;
}