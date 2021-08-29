// kode4.15.cpp
// dikompilasi dengan kode4.14.cpp
#include <iostream>
#include "kode4.13.h"
int main()
{
using std::cout;
using std::endl;
basisAMD baju("Hassenda", 8);
tanpaAMD balon("merah", "Gelap", 4);
denganAMD peta("Medan", "Merdeka", 5);
cout << baju << endl;
cout << balon << endl;
cout << peta << endl;
tanpaAMD balon2(balon);
denganAMD peta2;
peta2 = peta;
cout << balon2 << endl;
cout << peta2 << endl;
return 0;
}