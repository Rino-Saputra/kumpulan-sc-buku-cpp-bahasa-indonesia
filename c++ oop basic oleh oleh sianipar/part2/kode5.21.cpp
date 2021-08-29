// kode5.21.cpp
#include <iostream>
#include "kode5.13.h"
template <template <typename T> class Sesuatu>
class Kepiting
{
private:
	Sesuatu<int> s1;
Sesuatu<double> s2;
public:
Kepiting() {};
// mengasumsikan kelas Sesuatu memiliki anggota-anggota push() dan pop()
bool push(int a, double x) { return s1.push(a) && s2.push(x); }
bool pop(int & a, double & x){ return s1.pop(a) && s2.pop(x); }
};
int main()
{
//using std::cout;
//using std::cin;
//using std::endl;
Kepiting<Tumpukan> nebula;
// Tumpukan harus cocok dengan template <typename T> class Sesuatu
int ni;
double nb;
cout << "Masukkan pasangan int double, seperti 4 3.5 (0 0 untuk mengakhiri):\n";
while (cin>> ni >> nb && ni > 0 && nb > 0)
{
if (!nebula.push(ni, nb))
break;
}
while (nebula.pop(ni, nb))
cout << ni << ", " << nb << endl;
cout << "Selesai.\n";
return 0;
}