//kode1.18.cpp
#include <iostream>
using namespace std;
class dipakaiBersama {
public:
static int a;
} ;
int dipakaiBersama::a;		// mendefinisikan a
int main()
{
// menginisialisasi a sebelum penciptaan sembarang objek
dipakaiBersama::a = 99;
cout << "Berikut adalah nilai awal a: " << dipakaiBersama::a;
cout << "\n";
dipakaiBersama x;
cout << "Berikut adalah nilai x.a: " << x.a << endl;
return 0;
}