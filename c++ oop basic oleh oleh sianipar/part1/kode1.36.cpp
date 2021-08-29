// kode1.36.cpp
#include <iostream>
using namespace std;
class basis {
int i;
public:
void atur_i(int num) { i=num; }
int ambil_i() { return i; }
};
class terderivasi: public basis {
int j;
public:
void atur_j(int num) {j=num;}
int ambil_j() {return j;}
};
int main()
{
basis *bp;
terderivasi d[2];
bp = d;
d[0].atur_i(1);
d[1].atur_i(2);
cout << bp->ambil_i() << "\n";
bp++; // relatif terhadap basis, bukan terhadap terderivasi
cout << bp->ambil_i() << endl; // nilai sampah yang ditampilkan
return 0;
}