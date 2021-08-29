#include <iostream>
#include <cstring>
using namespace std;
class pekerja {
char nama[80];				// privat secara default
public:
void taruhNama(char *n);	// publik
void ambilNama(char *n);
private:
double gaji;				// sekarang, privat lagi
public:
void taruhGaji(double w);	// kembali ke publik
double ambilGaji();
};
void pekerja::taruhNama(char *n)
{
strcpy(nama, n);
}
void pekerja::ambilNama(char *n)
{
strcpy(n, nama);
}
void pekerja::taruhGaji(double w)
{
gaji = w;
}
double pekerja::ambilGaji()
{
return gaji;
}
int main()
{
pekerja irwan;
char nama[80];
irwan.taruhNama("Muhammad Irwan");
irwan.taruhGaji(75000);
irwan.ambilNama(nama);
cout << nama << " memiliki gaji Rp.";
cout << irwan.ambilGaji() << " per bulan.\n";
return 0;
}