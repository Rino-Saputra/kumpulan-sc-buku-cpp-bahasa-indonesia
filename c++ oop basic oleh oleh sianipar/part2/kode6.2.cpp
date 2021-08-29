// kode6.2.cpp
#include <iostream>
#include "kode6.4.h"
bool Tv::volnaik()
{
if (volume < MaksNil)
{
volume++;
return true;
}
else
return false;
}
bool Tv::volturun()
{
if (volume > MinNil)
{
volume--;
return true;
}
else
return false;
}
void Tv::kanNaik()
{
if (kanal < makskanal)
kanal++;
else
kanal = 1;
}
void Tv::kanTurun()
{
if (kanal > 1)
kanal--;
else
kanal = makskanal;
}
void Tv::pengaturan() const
{
using std::cout;
using std::endl;
cout << "TV dalam keadaan " << (keadaan == Mati? "Mati" : "Hidup") << endl;
if (keadaan == Hidup)
{
cout << "Pengaturan volume = " << volume << endl;
cout << "Pengaturan kanal = " << kanal << endl;
cout << "Mode = "
<< (mode == Antenna? "antenna" : "kabel") << endl;
cout << "Masukan = "
<< (masukan == TV? "TV" : "VCR") << endl;
}
}