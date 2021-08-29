// kode2.13.h -- kelas Vektor dengan <<
#ifndef VEKTOR_H_
#define VEKTOR_H_
#include <iostream>
namespace VEKTOR
{
class Vektor
{
private:
double x;		// nilai horisontal 
double y;		// nilai vertikal
double mag;		// panjang vektor
double ang;		// arah vektor
char mode;		// ‘r’ = rectangular, ‘p’ = polar
// metode-metode privat untuk menetapkan nilai-nilai
void set_mag();
void set_ang();
void set_x();
void set_y();
public:
Vektor();
Vektor(double n1, double n2, char form = 'r');
void set(double n1, double n2, char form = 'r');
~Vektor();
double xval() const {return x;}		// melaporkan nilai x 
double yval() const {return y;}		// melaporkan nilai y
double magval() const {return mag;} // melaporkan magnitudo
double angval() const {return ang;} // melaporkan sudut
void polar_mode();					// menetapkan mode ‘p’
void rect_mode();					// menetapkan mode ‘r’
// overloading operator
Vektor operator+(const Vektor & b) const;
Vektor operator-(const Vektor & b) const;
Vektor operator-() const;
Vektor operator*(double n) const;
// fungsi-fungsi teman
friend Vektor operator*(double n, const Vektor & a);
friend std::ostream & operator<<(std::ostream & os, const Vektor & v);
};
} // akhir dari namespace VEKTOR
#endif