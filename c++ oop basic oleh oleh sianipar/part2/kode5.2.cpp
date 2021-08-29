// kode5.2.cpp
#include "kode5.1.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// metode-metode publik
double Pelajar::Rerata() const
{
if (skor.size() > 0)
return skor.sum()/skor.size();
else
return 0;
}
const string & Pelajar::Nama() const
{
return nama;
}
double & Pelajar::operator[](int i)
{
return skor[i]; // menggunakan valarray<double>::operator[]()
}
double Pelajar::operator[](int i) const
{
return skor[i];
}
// metode privat
ostream & Pelajar::arr_out(ostream & os) const
{
int i;
int lim = skor.size();
if (lim > 0)
{
for (i = 0; i < lim; i++)
{
os << skor[i] << " ";
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
// menggunakan versi string dari operator>>()
istream & operator>>(istream & is, Pelajar & stu)
{
is >> stu.nama;
return is;
}
// menggunakan versi string dari operator<<()
ostream & operator<<(ostream & os, const Pelajar & stu)
{
os << "Skor untuk " << stu.nama << ":\n";
stu.arr_out(os); 				// menggunakan metode privat untuk skor
return os;
}
