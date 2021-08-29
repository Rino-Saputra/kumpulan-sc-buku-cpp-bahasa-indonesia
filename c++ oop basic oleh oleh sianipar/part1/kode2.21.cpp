// kode2.21.cpp -- fungsi-fungsi konversi yang didefinisikan pengguna
// dikompilasi dengan kode11.20.cpp
#include <iostream>
#include "kode2.19.h"
int main()
{
using std::cout;
Batuberat rotua(9,2.8);			// 9 batu, 2.8 gram
double p_wt = rotua;			// konversi implisit
cout << "Konversi ke double => ";
cout << "rotua: " << p_wt << " gram.\n";
cout << "Konversi ke int => ";
cout << "rotua: " << int (rotua) << " gram.\n";
return 0;
}