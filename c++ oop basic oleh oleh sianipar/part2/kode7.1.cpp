// kode7.1.cpp
#include <iostream>
#include <cstring> // atau string.h
int main()
{
using std::cout;
using std::endl;
const char * propinsi1 = "Sumut";
const char * propinsi2 = "Nusa Tenggara Barat";
const char * propinsi3 = "Bali";
int len = strlen(propinsi2);
cout << "indeks loop bertambah:\n";
int i;
for (i = 1; i <= len; i++)
{
cout.write(propinsi2,i);
cout << endl;
}
// menggabungkan keluaran
cout << "indeks loop berkurang:\n";
for (i = len; i > 0; i--)
cout.write(propinsi2,i) << endl;
// melebihi panjang string
cout << "Melebihi panjang string:\n";
cout.write(propinsi2, len + 5) << endl;
return 0;
}