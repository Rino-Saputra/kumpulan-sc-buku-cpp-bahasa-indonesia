// kode5.1.h
#ifndef KODE5_1_H_
#define KODE5_1_H_
#include <iostream>
#include <string>
#include <valarray>
class Pelajar
{
private:
typedef std::valarray<double> ArrayDb;
std::string nama;					// objek yang dikomposisi
ArrayDb skor;						// objek yang dikomposisi
// metode privat untuk keluaran skor
std::ostream & arr_out(std::ostream & os) const;
public:
Pelajar() : nama("Pelajar Null"), skor() {}
Pelajar(const std::string & s): nama(s), skor() {}
explicit Pelajar(int n) : nama("Null"), skor(n) {}
Pelajar(const std::string & s, int n) : nama(s), skor(n) {}
Pelajar(const std::string & s, const ArrayDb & a) : nama(s), skor(a) {}
Pelajar(const char * str, const double * pd, int n) : nama(str), skor(pd, n) {}
~Pelajar() {}
double Rerata() const;
const std::string & Nama() const;
double & operator[](int i);
double operator[](int i) const;
// fungsi-fungsi teman
// masukan
friend std::istream & operator>>(std::istream & is, Pelajar & stu); // 1 kata
// keluaran
friend std::ostream & operator<<(std::ostream & os, const Pelajar & stu);
};
#endif