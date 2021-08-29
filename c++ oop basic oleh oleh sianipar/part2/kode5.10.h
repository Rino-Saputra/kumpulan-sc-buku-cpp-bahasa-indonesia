// kode5.10.h
#ifndef KODE5_10_H_
#define KODE5_10_H_
#include <string>
class Pekerja // suatu kelas basis abstrak
{
private:
std::string namapenuh;
long id;
protected:
virtual void Data() const;
virtual void Get();
public:
Pekerja() : namapenuh("tidak ada"), id(0L) {}
Pekerja(const std::string & s, long n) : namapenuh(s), id(n) {}
virtual ~Pekerja() = 0; // fungsi virtual murni
virtual void Set() = 0;
virtual void Tampil() const = 0;
};
class Pelayan : virtual public Pekerja
{
private:
int mantap;
protected:
void Data() const;
void Get();
public:
Pelayan() : Pekerja(), mantap(0) {}
Pelayan(const std::string & s, long n, int p = 0) : Pekerja(s, n), mantap(p) {}
Pelayan(const Pekerja & wk, int p = 0) : Pekerja(wk), mantap(p) {}
void Set();
void Tampil() const;
};
class Penyanyi : virtual public Pekerja
{
protected:
enum {lainnya, alto, contralto, soprano, bass, baritone, tenor};
enum {jenisVokal = 7};
void Data() const;
void Get();
private:
static char *pv[jenisVokal]; 
int vokal;
public:
Penyanyi() : Pekerja(), vokal(lainnya) {}
Penyanyi(const std::string & s, long n, int v = lainnya) : Pekerja(s, n), vokal(v) {}
Penyanyi(const Pekerja & wk, int v = lainnya) : Pekerja(wk), vokal(v) {}
void Set();
void Tampil() const;
};
// pewarisan jamak
class PelayanBernyanyi : public Penyanyi, public Pelayan
{
protected:
void Data() const;
void Get();
public:
PelayanBernyanyi() {}
PelayanBernyanyi(const std::string & s, long n, int p = 0,int v = lainnya)
: Pekerja(s,n), Pelayan(s, n, p), Penyanyi(s, n, v) {}
PelayanBernyanyi(const Pekerja & wk, int p = 0, int v = lainnya)
: Pekerja(wk), Pelayan(wk,p), Penyanyi(wk,v) {}
PelayanBernyanyi(const Pelayan & wt, int v = lainnya)
: Pekerja(wt),Pelayan(wt), Penyanyi(wt,v) {}
PelayanBernyanyi(const Penyanyi & wt, int p = 0)
: Pekerja(wt),Pelayan(wt,p), Penyanyi(wt) {}
void Set();
void Tampil() const;
};
#endif