// kode1.27.cpp
#include <iostream>
using namespace std;
class kelasku {
int i;
public:
void atur_i(int n) { i=n; }
int ambil_i() { return i; }
};
int main()
{
kelasku ob1, ob2;
ob1.atur_i(99);
ob2 = ob1;	// menugaskan data dari ob1 ke ob2
cout << "Ini adalah i milik ob2: " << ob2.ambil_i() << endl;
return 0;
}