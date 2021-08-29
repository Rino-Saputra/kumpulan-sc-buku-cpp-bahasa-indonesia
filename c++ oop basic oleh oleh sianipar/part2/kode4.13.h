// kode4.13.h
#ifndef KODE4_13_H_
#define KODE4_13_H_
#include <iostream>
// Kelas basis menggunakan AMD
class basisAMD
{
private:
char * label;
int peringkat;
public:
basisAMD(const char * l = "null", int r = 0);
basisAMD(const basisAMD & rs);
virtual ~basisAMD();
basisAMD & operator=(const basisAMD & rs);
friend std::ostream & operator<<(std::ostream & os, const basisAMD & rs);
};
// kelas terderivasi tanpa AMD
// tidak ada destruktor yang dibutuhkan
// menggunakan konstruktor pengganda implisit
// menggunakan operator penugasan implisit
class tanpaAMD :public basisAMD
{
private:
enum { COL_LEN = 40};
char warna[COL_LEN];
public:
tanpaAMD(const char * c = "blank", const char * l = "null", int r = 0);
tanpaAMD(const char * c, const basisAMD & rs);
friend std::ostream & operator<<(std::ostream & os, const tanpaAMD & rs);
};
// kelas terderivasi dengan AMD
class denganAMD :public basisAMD
{
	private:
char * gaya;
public:
denganAMD(const char * s = "none", const char * l = "null",
int r = 0);
denganAMD(const char * s, const basisAMD & rs);
denganAMD(const denganAMD & hs);
~denganAMD();
denganAMD & operator=(const denganAMD & rs);
friend std::ostream & operator<<(std::ostream & os, const denganAMD & rs);
};
#endif