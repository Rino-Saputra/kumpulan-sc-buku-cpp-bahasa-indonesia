//kode1.6.cpp
#include <iostream>
using namespace std;
class kelasku {
int a, b;
public:
friend int jumlah(kelasku x);
void atur_ab(int i, int j);
};
void kelasku::atur_ab(int i, int j)
{
a = i;
b = j;
}
// Catatan: jumlah() tidak suatu fungsi anggota kelas manapun.
int jumlah(kelasku x)
{
/* Karena jumlah() adalah suatu friend dari kelasku, maka
dia bisa mengakses secara langsung a dan b. */
return x.a + x.b;
}
int main()
{
kelasku n;
n.atur_ab(3, 4);
cout << jumlah(n) << endl;
return 0;
}