// kode6.13.cpp
#include <iostream>
#include <new.h>
#include <cstdlib>
using namespace std;
struct Besar
{
double barang[20000];
};
int main()
{
Besar * pb;
try {
cout << "Mencoba untuk mendapatkan blok memori yang besar:\n";
pb = new Besar[10000]; // 1,600,000,000 byte
cout << "Permintaan memori diterima:\n";
}
catch (bad_alloc & ba)
{
cout << "Tangkap eksepsi!\n";
cout << ba.what() << endl;
exit(EXIT_FAILURE);
}
if (pb != 0)
{
pb[0].barang[0] = 4;
cout << pb[0].barang[0] << endl;
}
else
cout << "pb adalah pointer null\n";
delete [] pb;
return 0;
}