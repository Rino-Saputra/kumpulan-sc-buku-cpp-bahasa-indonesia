// kode5.4.h
#ifndef KODE5_4_H_
#define KODE5_4_H_
#include <iostream>
#include <valarray>
#include <string>

class Pelajar : private std::valarray<double>, private std::string
{
private:
typedef std::valarray<double> ArrayDb;
typedef std::string string1;
// metode privat untuk keluaran skor
std::ostream & arr_out(std::ostream & os) const;
public:
Pelajar() : string1("Pelajar Null"), ArrayDb() {}
Pelajar(const string1 & s) : string1(s), ArrayDb() {}
Pelajar(int n) : string1("Nully"), ArrayDb(n) {}
Pelajar(const string1 & s, int n) : string1(s), ArrayDb(n) {}
Pelajar(const string1 & s, const ArrayDb & a) : string1(s), ArrayDb(a) {}
Pelajar(const char * str, const double * pd, int n) : string1(str), ArrayDb(pd, n) {}
~Pelajar() {}
double Rerata() const;
double & operator[](int i);
double operator[](int i) const;
const string1 & Nama() const;
// fungsi-fungsi teman
// masukan
friend std::istream & operator>>(std::istream & is, Pelajar & stu); // 1 kata
// keluaran
friend std::ostream & operator<<(std::ostream & os, const Pelajar & stu);
};
#endif