// kode5.18.cpp
#include <iostream>
#include "kode5.17.h"
int main(void)
{
using std::cout;
using std::endl;
ArrayTP<int, 10> jumlah;
ArrayTP<double, 10> rerata;
ArrayTP< ArrayTP<int,5>, 10> burung;
int i, j;
for (i = 0; i < 10; i++)
{
jumlah[i] = 0;
for (j = 0; j < 5; j++)
{
	burung[i][j] = (i + 1) * (j + 1);
jumlah[i] += burung[i][j];
}
rerata[i] = (double) jumlah[i] / 10;
}
for (i = 0; i < 10; i++)
{
for (j = 0; j < 5; j++)
{
cout.width(2);
cout << burung[i][j] << ' ';
}
cout << ": jumlah = ";
cout.width(3);
cout << jumlah[i] << ", rerata = " << rerata[i] << endl;
}
cout << "Selesai.\n";
return 0;
}