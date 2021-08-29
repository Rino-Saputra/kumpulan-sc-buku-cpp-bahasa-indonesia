// kode5.7.h
#ifndef KODE5_7_H_
#define KODE5_7_H_
#include <string>
class Pekerja			// suatu kelas basis abstrak
{
private:
std::string namapenuh;
long id;
public:
Pekerja() : namapenuh("tidak ada"), id(0L) {}
Pekerja(const std::string & s, long n) : namapenuh(s), id(n) {}
virtual ~Pekerja() = 0; // destruktor virtual murni
virtual void Set();
virtual void Tampil() const;
};
class Pelayan : public Pekerja
{
private:
int mantap;
public:
Pelayan() : Pekerja(), mantap(0) {}
Pelayan(const std::string & s, long n, int p = 0) : Pekerja(s, n), mantap(p) {}
Pelayan(const Pekerja & wk, int p = 0) : Pekerja(wk), mantap(p) {}
void Set();
void Tampil() const;
};
class Penyanyi : public Pekerja
{
protected:
enum {lainnya, alto, contralto, soprano, bass, baritone, tenor};
enum {jenisVokal = 7};
private:
static char *pv[jenisVokal]; // jenis vokal
int vokal;
public:
Penyanyi() : Pekerja(), vokal(lainnya) {}
Penyanyi(const std::string & s, long n, int v = lainnya) : Pekerja(s, n), vokal(v) {}
Penyanyi(const Pekerja & wk, int v = lainnya) : Pekerja(wk), vokal(v) {}
void Set();
void Tampil() const;
};
#endif