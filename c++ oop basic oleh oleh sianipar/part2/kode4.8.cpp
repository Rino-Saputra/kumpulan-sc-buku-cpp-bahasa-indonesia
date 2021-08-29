// kode4.8.cpp
#include <iostream>
#include <cstring>
#include "kode4.7.h"
using std::cout;
using std::ios_base;
using std::endl;
// Metode-metode Emas
Emas::Emas(const char *s, long an, double bal)
{
strncpy(namapenuh, s, MAKS - 1);
namapenuh[MAKS - 1] = '\0';
noAkun = an;
simpanan = bal;
}
void Emas::Menabung(double amt)
{if (amt < 0)
cout << "Menabung negatif tidak diijinkan; "
<< "Menabung dibatalkan.\n";
else
simpanan += amt;
}
void Emas::Menarik(double amt)
{
if (amt < 0)
cout << "Penarikan harus positif; "
<< "penarikan dibatalkan.\n";
else if (amt <= simpanan)
simpanan -= amt;
else
cout << "Jumlah penarikan Rp. " << amt
<< " melebihi simpanan anda.\n"
<< "Penarikan dibatalkan.\n";
}
double Emas::Simpanan() const
{
return simpanan;
}
void Emas::LihatAkun() const
{
// membentuk format ###.##
ios_base::fmtflags keadaanAwal =
cout.setf(ios_base::fixed, ios_base::floatfield);
cout.setf(ios_base::showpoint);
cout.precision(2);
cout << "Klien: " << namapenuh << endl;
cout << "Nomor Rekening: " << noAkun << endl;
cout << "Simpanan: Rp. " << simpanan << endl;
cout.setf(keadaanAwal); // kembali ke format asli
}
// EmasPlus Methods
EmasPlus::EmasPlus(const char *s, long an, double bal,
double ml, double r) : Emas(s, an, bal)
{
maksPinjaman = ml;
hutangBank = 0.0;
suku = r;
}
EmasPlus::EmasPlus(const Emas & ba, double ml, double r) : Emas(ba) // menggunakan konstruktor pengganda implisit
{
maksPinjaman = ml;
hutangBank = 0.0;
suku = r;
}
// mendefinisi-ulang bagaimana LihatAkun() bekerja
void EmasPlus::LihatAkun() const
{
// membuat format ###.##
ios_base::fmtflags keadaanAwal =
cout.setf(ios_base::fixed, ios_base::floatfield);
cout.setf(ios_base::showpoint);
cout.precision(2);
Emas::LihatAkun(); // menampilkan porsi basis
cout << "Maksimum pinjaman: Rp. " << maksPinjaman << endl;
cout << "Hutang ke bank: Rp. " << hutangBank << endl;
cout << "Suku bunga: " << 100 * suku << "%\n";
cout.setf(keadaanAwal);
}
// mendefinisi-ulang bagaiman Menarik() bekerja
void EmasPlus::Menarik(double amt)
{
// membuat format ###.##
ios_base::fmtflags initialState =
cout.setf(ios_base::fixed, ios_base::floatfield);
cout.setf(ios_base::showpoint);
cout.precision(2);
double bal = Simpanan();
if (amt <= bal)
Emas::Menarik(amt);
else if ( amt <= bal + maksPinjaman - hutangBank)
{
double advance = amt - bal;
hutangBank += advance * (1.0 + suku);
cout << "Yang dibayarkan Bank: Rp. " << advance << endl;
cout << "Biaya tambahan: Rp. " << advance * suku << endl;
Menabung(advance);
Emas::Menarik(amt);
}
else
cout << "Batas kredit terlampaui. Transaksi dibatalkan.\n";
cout.setf(initialState);
}