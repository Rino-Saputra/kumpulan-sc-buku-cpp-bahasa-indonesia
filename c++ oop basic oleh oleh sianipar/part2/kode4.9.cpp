// kode4.9.cpp 
// dikompilasi dengan kode4.18.cpp
#include <iostream>
#include "kode4.7.h"
int main()
{
using std::cout;
using std::endl;
Emas Diva("Diva Bogor", 381299, 4000.00);
EmasPlus Dea("Dea Cimahi", 382288, 3000.00);
Diva.LihatAkun();
cout << endl;
Dea.LihatAkun();
cout << endl;
cout << "Menabung Rp.1000 ke dalam rekening Dea:\n";
Dea.Menabung(1000.00);
cout << "Simpanan sekarang: Rp. " << Dea.Simpanan() << endl;
cout << "Menarik Rp. 4200 dari rekening Diva:\n";
Diva.Menarik(4200.00);
cout << "Simpanan Diva: Rp. " << Diva.Simpanan() << endl;
cout << "Menarik Rp. 4200 dari rekening Dea:\n";
Dea.Menarik(4200.00);
Dea.LihatAkun();
return 0;
}