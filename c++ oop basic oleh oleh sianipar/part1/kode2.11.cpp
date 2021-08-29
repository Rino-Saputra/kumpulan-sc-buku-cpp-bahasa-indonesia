// kode2.11.cpp 
#include <iostream>
#include "kode2.10.h"
Waktu::Waktu()
{
jam = menit = 0;
}
Waktu::Waktu(int h, int m )
{
jam = h;
menit = m;
}
void Waktu::TambahMen(int m)
{
menit += m;
jam += menit / 60;
menit %= 60;
}
void Waktu::TambahJam(int h)
{
jam += h;
}
void Waktu::Reset(int h, int m)
{
jam = h;
menit = m;
}
Waktu Waktu:: operator+(const Waktu & t) const
{
Waktu Jumlah;
Jumlah.menit = menit + t.menit;
Jumlah.jam = jam + t.jam + Jumlah.menit / 60;
Jumlah.menit %= 60;
return Jumlah;
}
Waktu Waktu::operator-(const Waktu & t) const
{
Waktu selisih;
int tot1, tot2;
tot1 = t.menit + 60 * t.jam;
tot2 = menit + 60 * jam;
selisih.menit = (tot2 - tot1) % 60;
selisih.jam = (tot2 - tot1) / 60;
return selisih;
}
Waktu Waktu::operator*(double kali) const
{
Waktu hasil;
long totalmenit = jam * kali * 60 + menit * kali;
hasil.jam = totalmenit / 60;
hasil.menit = totalmenit % 60;
return hasil;
}
std::ostream & operator<<(std::ostream & os, const Waktu & t)
{
os << t.jam << " jam, " << t.menit << " menit";
return os;
}
