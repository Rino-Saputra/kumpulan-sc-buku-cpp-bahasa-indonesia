//kode1.33.cpp
#include <iostream>
using namespace std;
class cl {
public:
int i;
cl(int j) { i=j; }
};
int main()
{
cl ob(1);
int *p;
p = &ob.i;				// ambil alamat ob.i
cout << *p << endl;		// mengakses ob.i lewat pointer p
return 0;
}