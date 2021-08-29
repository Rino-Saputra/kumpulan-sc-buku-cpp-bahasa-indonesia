//kode2.12.cpp
#include <iostream>
#include "kode2.10.h"
int main()
{
using std::cout;
using std::endl;
Waktu puji(3, 35);
Waktu anggelina(2, 48);
Waktu temp;
cout << "Puji dan Anggelina:\n";
cout << puji<<"; " << anggelina << endl;
temp = puji + anggelina; 	// operator+()
cout << "Puji + Anggelina: " << temp << endl;
temp = puji* 1.17; 		// fungsi anggota operator*()
cout << "Puji * 1.17: " << temp << endl;
cout << "10 * Anggelina: " << 10 * anggelina << endl;
return 0;
}
