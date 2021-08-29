// kode2.1.h -- Time class before operator overloading
#ifndef KODE2_1_H_
#define KODE2_1_H_
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
Waktu Jumlah(const Waktu & t) const;
void Tampil() const;
};
#endif
