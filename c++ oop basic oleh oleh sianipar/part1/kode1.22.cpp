//kode1.22.cpp
#include <iostream>
using namespace std;
class tipe_static {
static int i;
public:
static void inisial(int x) {i = x;}
void tampil() {cout << i << endl;}
};
int tipe_static::i;			// mendefinisikan i
int main()
{
// inisialisasi data static sebelum penciptaan suatu objek
tipe_static::inisial(100);
tipe_static x;
x.tampil();					// menampilkan 100
return 0;
}