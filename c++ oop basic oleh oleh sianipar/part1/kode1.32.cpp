//kode1.32.cpp
#include <iostream>
using namespace std;
class cl {
int i;
public:
cl() { i=0; }
cl(int j) { i=j; }
int ambil_i() { return i; }
};
int main()
{
cl ob[3] = {1, 2, 3};
cl *p;
int i;
p = ob;					// alamat awal objek ob
for(i=0; i<3; i++) {
cout << p->ambil_i() << "\n";
p++;					// menunjuk ke objek berikutnya
}
return 0;
}