// kode4.11.h 
#ifndef KODE4_11_H_
#define KODE4_11_H_
// kelas Emas
class rekABC
{
private:
enum {MAKS = 35};
char namapenuh[MAKS];
long noAkun;
double simpanan;
protected:
const char * NamaPenuh() const {return namapenuh;}
long NoAkun() const {return noAkun;}
std::ios_base::fmtflags SetFormat() const;

public:
rekABC(const char *s = "kosong", long an = -1, double bal = 0.0);
void Menabung(double amt);
virtual void Menarik(double amt)=0;  // suatu fungsi virtual murni
double Simpanan() const {return simpanan;};
virtual void LihatAkun() const=0; // suatu fungsi virtual murni
virtual ~rekABC() {}
};

//kelas Emas
class Emas: public rekABC
{
public:
Emas(const char *s = "kosong", long an = -1, double bal = 0.0): rekABC(s, an, bal) { }
virtual void Menarik(double amt);
virtual void LihatAkun() const;
virtual ~Emas() {}
};

//kelas EmasPlus
class EmasPlus : public rekABC
{
private:
double maksPinjaman;
double suku;
double hutangBank;
public:
EmasPlus(const char *s = "Kosong", long an = -1, double bal = 0.0, double ml = 1000, double r = 0.10);
EmasPlus(const Emas & ba, double ml = 1000, double r = 0.1);
virtual void LihatAkun() const;
virtual void Menarik(double amt);
void ResetMaks(double m) { maksPinjaman = m; };
void ResetSuku(double r) { suku = r; };
void ResetHutang() { hutangBank = 0; };
};
#endif