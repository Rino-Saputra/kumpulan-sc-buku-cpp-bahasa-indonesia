//kode1.37.cpp
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
int cl::*data;			// pointer data anggota
int (cl::*fung)();		// pointer fungsi anggota
cl ob1(1), ob2(2);		// menciptakan dua objek
data = &cl::nil;		// mendapatkan offset untuk nil
fung = &cl::double_nil; // mendapatkan offset untuk double_nil()
cout << "Berikut adalah bebarapa nilai dari data anggota: ";
cout << ob1.*data << " " << ob2.*data << "\n";
cout << "Berikut adalah beberapa nilai dari fungsi anggota: ";
cout << (ob1.*fung)() << " ";
cout << (ob2.*fung)() << "\n";
return 0;
}