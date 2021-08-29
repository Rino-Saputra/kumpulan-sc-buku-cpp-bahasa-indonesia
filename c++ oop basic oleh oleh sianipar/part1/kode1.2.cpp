//kode1.2.cpp
#include <iostream>
using namespace std;
class kelasSaya {
public:
int i, j, k;			// dapat diakses oleh semua bagian progra
};
int main()
{
kelasSaya a, b;
a.i = 100;				// mengakses i, j, dan k
a.j = 4;
a.k = a.i * a.j;
b.k = 12;				// ingat, a.k and b.k adalah berbeda
cout << a.k << " " << b.k << endl;
return 0;
}