//kode1.17.cpp
#include <iostream>
using namespace std;
class dipakaiBersama {
static int a;
int b;
public:
void atur(int i, int j) {a=i; b=j;}
void tampil();
} ;
int dipakaiBersama::a;		// mendefinisikan a
void dipakaiBersama::tampil()
{
cout << "Ini adalah variabel static a: " << a;
cout << "\nIni adalah variabel non-static b: " << b;
cout << "\n";
}
int main()
{
dipakaiBersama x, y;
x.atur(1, 1);			// ditetapkan a menjadi 1
x.tampil();
y.atur(2, 2);			// a diubah menjadi 2
y.tampil();
x.tampil(); /* di sini a telah berubah untuk x dan y,
karena a dipakai bersama oleh kedua objek. */
return 0;
}