//kode1.20.cpp
#include <iostream>
using namespace std;
class kounter {
public:
static int hitung;
kounter() { hitung++; }
~kounter() { hitung--; }
};
int kounter::hitung;
void f();
int main(void)
{
kounter o1;
cout << "Objek yang memiliki eksistensi adalah: ";
cout << kounter::hitung << "\n";
kounter o2;
cout << "Objek yang memiliki eksistensi adalah: ";
cout << kounter::hitung << "\n";
f();
cout << "Objek yang memiliki eksistensi adalah: ";
cout << kounter::hitung << "\n";
return 0;
}
void f()
{
kounter temp;
cout << "Objek yang memiliki eksistensi adalah: ";
cout << kounter::hitung << "\n";
// temp dibuang saat f() selesai dieksekusi
}