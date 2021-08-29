// kode6.17.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
class Bagus
{
private:
int pegang;
public:
Bagus(int h = 0) : pegang(h) {}
virtual void Bicara() const { cout << "Saya adalah kelas Bagus!\n";}
virtual int Nilai() const { return pegang; }
};
class Hebat : public Bagus
{
public:
Hebat(int h = 0) : Bagus(h) {}
void Bicara() const {cout << "Saya adalah kelas Hebat!!\n"; }
virtual void Katakan() const
{ cout << "Saya pegang nilai Hebat " << Nilai() << "!\n";}
};
class LuarBiasa : public Hebat
{
private:
char ch;
public:
LuarBiasa(int h = 0, char c = 'A') : Hebat(h), ch(c) {}
void Bicara() const {cout << "Saya kelas LuarBiasa!!!\n";}
void Katakan() const {cout << "Saya pegang karakter " << ch <<
" dan integer " << Nilai() << "!\n"; }
};
Bagus * DapatSatu();
int main()
{
srand(time(0));
Bagus * pg;
Hebat * ps;
for (int i = 0; i < 5; i++)
{
pg = DapatSatu();
pg->Bicara();
if( ps = dynamic_cast<Hebat *>(pg))
ps->Katakan();
}
return 0;
}
Bagus * DapatSatu() // menghasilkan satu dari tiga tipe objek secara acak
{
Bagus * p;
switch( rand() % 3)
{
case 0: p = new Bagus(rand() % 100);
break;
case 1: p = new Hebat(rand() % 100);
break;
case 2: p = new LuarBiasa(rand() % 100,
'A' + rand() % 26);
break;
}
return p;
}