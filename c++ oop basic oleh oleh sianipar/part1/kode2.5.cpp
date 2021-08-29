// kode2.5.cpp 
#include <iostream>
#include "kode2.4.h"
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

void Waktu::Tampil() const
{
std::cout << jam << " jam, " << menit << " menit";
}
