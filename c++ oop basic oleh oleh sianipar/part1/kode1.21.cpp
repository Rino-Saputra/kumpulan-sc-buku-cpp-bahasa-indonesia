//kode1.21.cpp
#include <iostream>
using namespace std;
class cl {
static int sumberDaya;
public:
static int ambil_sumberDaya();
void bebaskan_sumberDaya() { sumberDaya = 0; }
};
int cl::sumberDaya;			// mendefinisikan sumberDaya
int cl::ambil_sumberDaya()
{
if(sumberDaya) return 0;	// sumberDaya sedang digunakan
else {
sumberDaya = 1;
return 1;					// sumberDaya dialokasikan kepada objek ini
}
}
int main()
{
cl ob1, ob2;
/* ambil_sumberDaya() adalah static jadi dapat dipanggil secara independen
dari sembarang objek. */
if(cl::ambil_sumberDaya()) cout << "ob1 memiliki sumber daya\n";
if(!cl::ambil_sumberDaya()) cout << "ob2 menolak sumber daya\n";
ob1.bebaskan_sumberDaya();
if(ob2.ambil_sumberDaya())	// masih bisa menggunakan sintaks objek
cout << "ob2 sekarang dapat menggunakan sumber daya\n";
return 0;
}