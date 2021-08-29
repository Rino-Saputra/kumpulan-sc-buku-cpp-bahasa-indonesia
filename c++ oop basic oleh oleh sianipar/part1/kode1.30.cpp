//kode1.30.cpp
#include <iostream>
using namespace std;
class cl {
int h;
int i;
public:
cl(int j, int k) { h=j; i=k; } // knstruktor dengan 2 parameter
int ambil_i() {return i;}
int ambil_h() {return h;}
};
int main()
{
cl ob[3] = {
cl(1, 2), // inisialisasi
cl(3, 4),
cl(5, 6)
};
int i;
for(i=0; i<3; i++) {
cout << ob[i].ambil_h();
cout << ", ";
cout << ob[i].ambil_i() << "\n";
}
return 0;
}