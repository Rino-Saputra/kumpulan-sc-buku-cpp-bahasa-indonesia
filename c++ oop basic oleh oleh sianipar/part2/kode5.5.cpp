// kode5.5.cpp
#include "kode5.4.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// metode-metode publik
double Pelajar::Rerata() const
{
if (ArrayDb::size() > 0)
return ArrayDb::sum()/ArrayDb::size();
else
return 0;
}
const string & Pelajar::Nama() const
{
return (const string &) *this;
}
double & Pelajar::operator[](int i)
{
return ArrayDb::operator[](i); // menggunakan ArrayDb::operator[]()
}
double Pelajar::operator[](int i) const
{
return ArrayDb::operator[](i);
}
// metode privat
ostream & Pelajar::arr_out(ostream & os) const
{
int i;
int lim = ArrayDb::size();
if (lim > 0)
{
for (i = 0; i < lim; i++)
{
os << ArrayDb::operator[](i) << " ";
if (i % 5 == 4)
os << endl;
}
if (i % 5 != 0)
os << endl;
}
else
os << " array kosong ";
return os;
}

// fungsi-fungsi teman
// menggunakan versi string operator>>()
istream & operator>>(istream & is, Pelajar & stu)
{
is >> (string &)stu;
return is;
}
ostream & operator<<(ostream & os, const Pelajar & stu)
{
os << "Skor untuk " << (const string &) stu << ":\n";
stu.arr_out(os); // menggunakan metode privat untuk skor
return os;
}