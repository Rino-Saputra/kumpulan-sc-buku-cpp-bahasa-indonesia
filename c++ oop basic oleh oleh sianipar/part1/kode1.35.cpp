//kode1.35.cpp
#include <iostream>
using namespace std;
class basis {
int i;
public:
void atur_i(int nilai) { i=nilai; }
int ambil_i() { return i; }
};
class terderivasi: public basis {
int j;
public:
void atur_j(int nilai) { j=nilai; }
int ambil_j() { return j; }
};
int main()
{
basis *bp;
terderivasi d;
bp = &d;				// pointer basis menunjuk ke objek terderivasi
						// mengakses objek terderivasi menggunakan pointer basis
bp->atur_i(10);
cout << bp->ambil_i() << "\n";
/* Berikut ini tidak bisa dijalankan. Anda tidak dapat mengakses elemen-elemen
suatu kelas terderivasi menggunakan suatu pointer basis
bp->atur_j(88);			// error
cout << bp->get_j();	// error
*/
return 0;
}