// kode4.12.cpp
#include <iostream>
#include <cstring>
#include "kode4.11.h"
using std::cout;
using std::ios_base;
using std::endl;
// Kelas basis abstrak
rekABC::rekABC(const char *s, long an, double bal)
{
strncpy(namapenuh, s, MAKS - 1);
namapenuh[MAKS - 1] = '\0';
noAkun = an;
simpanan = bal;
}
void rekABC::Menabung(double amt)
{if (amt < 0)
cout << "Menabung negatif tidak diijinkan; "
<< "Menabung dibatalkan.\n";
else
simpanan += amt;
}
void rekABC::Menarik(double amt)
{
simpanan -= amt;
}
// protected method
ios_base::fmtflags rekABC::SetFormat() const
{
// set up ###.## format
ios_base::fmtflags keadaanAwal =
cout.setf(ios_base::fixed, ios_base::floatfield);
cout.setf(ios_base::showpoint);
cout.precision(2);
return keadaanAwal;
}
void Emas::Menarik(double amt)
{
if (amt < 0)
cout << "Penarikan harus positif; "
<< "penarikan dibatalkan.\n";
else if (amt <= Simpanan())
rekABC::Menarik(amt);
else
cout << "Jumlah penarikan Rp. " << amt
<< " melebihi simpanan anda.\n"
<< "Penarikan dibatalkan.\n";
}

void Emas::LihatAkun() const
{
ios_base::fmtflags keadaanAwal = SetFormat();
cout << "Klien: " << NamaPenuh << endl;
cout << "Nomor Rekening: " << NoAkun() << endl;
cout << "Simpanan: Rp. " << Simpanan() << endl;
cout.setf(keadaanAwal); // kembali ke format asli
}
// EmasPlus Methods
EmasPlus::EmasPlus(const char *s, long an, double bal,
double ml, double r) : rekABC(s, an, bal)
{
maksPinjaman = ml;
hutangBank = 0.0;
suku = r;
}
EmasPlus::EmasPlus(const Emas & ba, double ml, double r) : rekABC(ba) // menggunakan konstruktor pengganda implisit
{
maksPinjaman = ml;
hutangBank = 0.0;
suku = r;
}
// mendefinisi-ulang bagaimana LihatAkun() bekerja
void EmasPlus::LihatAkun() const
{
ios_base::fmtflags keadaanAwal = SetFormat();
cout << "Maksimum pinjaman: Rp. " << maksPinjaman << endl;
cout << "Hutang ke bank: Rp. " << hutangBank << endl;
cout << "Suku bunga: " << 100 * suku << "%\n";
cout.setf(keadaanAwal);
}
// mendefinisi-ulang bagaiman Menarik() bekerja
void EmasPlus::Menarik(double amt)
{
ios_base::fmtflags keadaanAwal = SetFormat();
double bal = Simpanan();
if (amt <= bal)
rekABC::Menarik(amt);
else if ( amt <= bal + maksPinjaman - hutangBank)
{
double advance = amt - bal;
hutangBank += advance * (1.0 + suku);
cout << "Yang dibayarkan Bank: Rp. " << advance << endl;
cout << "Biaya tambahan: Rp. " << advance * suku << endl;
Menabung(advance);
rekABC::Menarik(amt);
}
else
cout << "Batas kredit terlampaui. Transaksi dibatalkan.\n";
cout.setf(keadaanAwal);
}