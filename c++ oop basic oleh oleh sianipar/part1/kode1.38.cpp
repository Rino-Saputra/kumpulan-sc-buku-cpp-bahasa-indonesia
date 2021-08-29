//kode1.38.cpp
#include <iostream>
using namespace std;
class cl {
public:
cl(int i) { nil=i; }
int nil;
int double_nil() { return nil+nil; }
};
int main()
{
int cl::*data;				// pointer data anggota
int (cl::*fung)();			// pointer fungsi anggota
cl ob1(1), ob2(2);			// menciptakan objek-objek
cl *p1, *p2;
p1 = &ob1;					// mengakses objek-objek melalui pointer
p2 = &ob2;
data = &cl::nil;			// mendapatkan offset dari nil
fung = &cl::double_nil;		// mendapatkan offset dari double_nil()
cout << "Berikut adalah nilai-nilai nil: ";
cout << p1->*data << " " << p2->*data << "\n";
cout << "Berikut adalah nilai-nilai double_nil(): ";
cout << (p1->*fung)() << " ";
cout << (p2->*fung)() << "\n";
return 0;
}