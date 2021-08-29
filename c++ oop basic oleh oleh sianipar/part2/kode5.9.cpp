//kode5.9.cpp
#include <iostream>
#include "kode5.7.h"
const int LIM = 4;
int main()
{
Pelayan saut("Saut Siringo-ringo", 314L, 5);
Penyanyi rudy("Rudy Siregar", 522L, 3);
Pelayan w_temp;
Penyanyi s_temp;
Pekerja * pw[LIM] = {&saut, &rudy, &w_temp, &s_temp};
int i;
for (i = 2; i < LIM; i++)
pw[i]->Set();
for (i = 0; i < LIM; i++)
{
pw[i]->Tampil();
std::cout << std::endl;
}
return 0;
}