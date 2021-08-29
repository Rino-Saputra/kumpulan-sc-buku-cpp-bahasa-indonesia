//kode1.31.cpp
#include <iostream>
using namespace std;
class cl {
int i;
public:
cl(int j) { i=j; }
int ambil_i() { return i; }
};
int main()
{
cl ob(88), *p;
p = &ob;						// ambil alamat objek ob
cout << p->ambil_i() << endl;	// gunakan -> untuk memanggil ambil_i()
return 0;
}