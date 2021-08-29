// kode7.5.cpp
#include <iostream>
int main()
{
using std::cout;
cout.fill('*');
const char * sahabat[2] = { "Yupitasari, Psikologi UGM 1995", "Geovanni, Sosiologi UGM 1996"};
long bonus[2] = {900000, 1350000};
for (int i = 0; i < 2; i++)
{
cout << sahabat[i] << ": Rp.";
cout.width(10);
cout << bonus[i] << "\n";
}
return 0;
}