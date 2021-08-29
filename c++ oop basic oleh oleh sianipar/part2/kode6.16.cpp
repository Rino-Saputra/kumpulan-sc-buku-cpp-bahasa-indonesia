// kode6.16.cpp
#include <iostream>
#include "kode6.14.h"
int main()
{
using std::cout;
using std::cin;
using std::endl;
double vals1[12] =
{
1220, 1100, 1122, 2212, 1232, 2334,
2884, 2393, 3302, 2922, 3002, 3544
};
double vals2[12] =
{
12, 11, 22, 21, 32, 34,
28, 29, 33, 29, 32, 35
};
Sales sales1(2004, vals1, 12);
DilabelSales sales2("Yamari",2005, vals2, 12 );
cout << "Blok try pertama:\n";
try
{
int i;
cout << "Tahun = " << sales1.Tahun() << endl;
for (i = 0; i < 12; ++i)
{
cout << sales1[i] << ' ';
if (i % 6 == 5)
cout << endl;
}
cout << "Tahun = " << sales2.Tahun() << endl;
cout << "Label = " << sales2.Label() << endl;
for (i = 0; i <= 12; ++i)
{
cout << sales2[i] << ' ';
if (i % 6 == 5)
cout << endl;
}
cout << "Akhir blok try 1.\n";
}
catch(DilabelSales::nindeks_buruk & buruk)
{
cout << buruk.what();
cout << "Perusahaan: " << buruk.label_nil() << endl;
cout << "indeks buruk: " << buruk.bi_val() << endl;
}
catch(Sales::indeks_buruk & buruk)
{
cout << buruk.what();
cout << "indeks buruk: " << buruk.bi_val() << endl;
}
cout << "\nBlok try berikutnya:\n";
try
{
sales2[2] = 37.5;
sales1[20] = 23345;
cout << "Akhir blok try 2.\n";
}
catch(DilabelSales::nindeks_buruk & buruk)
{
cout << buruk.what();
cout << "Perusahaan: " << buruk.label_nil() << endl;
cout << "indeks buruk: " << buruk.bi_val() << endl;
}
catch(Sales::indeks_buruk & buruk)
{
cout << buruk.what();
cout << "indeks buruk: " << buruk.bi_val() << endl;
}
cout << "selesai\n";
return 0;
}