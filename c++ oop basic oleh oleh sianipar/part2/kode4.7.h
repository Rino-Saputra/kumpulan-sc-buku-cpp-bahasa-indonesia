// kode4.7.h 
#ifndef KODE4_7_H_
#define KODE4_7_H_
// kelas Emas
class Emas
{
private:
enum {MAKS = 35};
char namapenuh[MAKS];
long noAkun;
double simpanan;
public:
Emas(const char *s = "kosong", long an = -1,
double bal = 0.0);
void Menabung(double amt);
virtual void Menarik(double amt);
double Simpanan() const;
virtual void LihatAkun() const;
virtual ~Emas() {}
};
//kelas EmasPlus
class EmasPlus : public Emas
{
private:
double maksPinjaman;
double suku;
double hutangBank;
public:
EmasPlus(const char *s = "Kosong", long an = -1,
double bal = 0.0, double ml = 1000,
double r = 0.10);
EmasPlus(const Emas & ba, double ml = 1000, double r = 0.1);
virtual void LihatAkun()const;
virtual void Menarik(double amt);
void ResetMaks(double m) { maksPinjaman = m; }
void ResetSuku(double r) { suku = r; };
void ResetHutang() { hutangBank = 0; }
};
#endif