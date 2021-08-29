// kode6.15.cpp
#include "kode6.14.h"
Sales::indeks_buruk::indeks_buruk(int ix, const char * s )
: std::logic_error(s), bi(ix)
{
}
Sales::Sales(int yy)
{
tahun = yy;
for (int i = 0; i < BULAN; ++i)
gross[i] = 0;
}
Sales::Sales(int yy, const double * gr, int n)
{
tahun = yy;
int lim = (n < BULAN)? n : BULAN;
int i;
for (i = 0; i < lim; ++i)
gross[i] = gr[i];
// untuk i > n dan i < BULAN
for ( ; i < BULAN; ++i)
gross[i] = 0;
}
double Sales::operator[](int i) const throw(std::logic_error)
{
if(i < 0 || i >= BULAN)
throw indeks_buruk(i);
return gross[i];
}
double & Sales::operator[](int i) throw(std::logic_error)
{
if(i < 0 || i >= BULAN)
throw indeks_buruk(i);
return gross[i];
}
DilabelSales::nindeks_buruk::nindeks_buruk(const char * lb, int ix, const char * s ) : Sales::indeks_buruk(ix, s)
{
strcpy(lbl, lb);
}
DilabelSales::DilabelSales(const char * lb, int yy): Sales(yy)
{
strcpy(label, lb);
}
DilabelSales::DilabelSales(const char * lb, int yy, const double * gr, int n) : Sales(yy, gr, n)
{
strcpy(label, lb);
}
double DilabelSales::operator[](int i) const throw(std::logic_error)
{
if(i < 0 || i >= BULAN)
throw nindeks_buruk(Label(), i);
return Sales::operator[](i);
}
double & DilabelSales::operator[](int i) throw(std::logic_error)
{
if(i < 0 || i >= BULAN)
throw nindeks_buruk(Label(), i);
return Sales::operator[](i);
}