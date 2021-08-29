// kode2.10.h -- kelas Waktu setelah overloading operator
#ifndef KODE2_10_H_
#define KODE2_10_H_
#include <iostream>
class Waktu
{
private:
int jam;
int menit;
public:
Waktu();
Waktu(int h, int m = 0);
void TambahMen(int m);
void TambahJam(int h);
void Reset(int h = 0, int m = 0);
Waktu operator+(const Waktu & t) const;
 Waktu operator-(const Waktu & t) const;
 Waktu operator*(double n) const;
 friend Waktu operator*(double m, const Waktu & t)
 { return t * m; } 	// definisi inline
 friend std::ostream & operator<<(std::ostream & os, const Waktu & t);
};
#endif
