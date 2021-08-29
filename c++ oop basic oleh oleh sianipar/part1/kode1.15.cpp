//kode1.15.cpp
#include <iostream>
#include <cstring>
using namespace std;
const int ADA = 1;
const int KELUAR = 0;
class buku {
char pengarang[40];
char judul[40];
int status;
public:
buku(char *n, char *t, int s);
int ambil_status() {return status;}
void atur_status(int s) {status = s;}
void tampil();
};
buku::buku(char *n, char *t, int s)
{
strcpy(pengarang, n);
strcpy(judul, t);
status = s;
}
void buku::tampil()
{
cout << judul << " oleh " << pengarang;
cout << " ---> ";
if(status==ADA) cout << "Ada.\n";
else cout << "Keluar.\n";
}
int main()
{
buku b1("Twain", "Tom Sawyer", ADA);
buku b2("Melville", "Moby Dick", KELUAR);
b1.tampil();
b2.tampil();
return 0;
}