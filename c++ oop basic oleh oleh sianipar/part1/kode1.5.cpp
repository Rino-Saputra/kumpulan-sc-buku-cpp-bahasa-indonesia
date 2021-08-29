//kode1.5.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
// mendefinisikan union tak bernama
	union {
long l;
double d;
char s[4];
} ;
// sekarang, akses elemen-elemen union secara langsung
l = 100000;
cout << l << " ";
d = 123.2342;
cout << d << " ";
strcpy(s, "Indonesia Raya");
cout << s << endl;
return 0;
}