// kode2.7.h -- kelas Waktu setelah overloading operator
#ifndef KODE2_7_H_
#define KODE2_7_H_

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
void Tampil() const;
};
#endif
