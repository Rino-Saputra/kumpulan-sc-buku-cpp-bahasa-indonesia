//kode1.16.cpp
#include <iostream>
using namespace std;
class X {
int a;
public:
	X(int j) { a = j; }
int Ambil_a() { return a; }
};
int main()
{
X ob = 99;						// melewatkan 99 ke j
cout << ob.Ambil_a() << endl;	// menghasilkan keluaran 99
return 0;
}