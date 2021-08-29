// kode2.14.cpp -- metode-metode untuk kelas Vektor
#include <cmath>
#include "kode2.13.h" // menyertakan <iostream>
//using std::sin;
//using std::cos;
//using std::atan2;
using std::cout;
namespace VEKTOR
{
const double Rad_to_deg = 57.2957795130823;
// metode-metode privat
// mengkalkulasi magnitudo dari x dan y
void Vektor::set_mag()
{
mag = sqrt(x * x + y * y);
}
void Vektor::set_ang()
{
if (x == 0.0 && y == 0.0)
ang = 0.0;
else
ang = atan2(y, x);
}
// menetapkan x dari koordinat polar
void Vektor::set_x()
{
x = mag * cos(ang);
}
// menetapkan y dari koordinat polar
void Vektor::set_y()
{
y = mag * sin(ang);
}
// metode-metode publik
Vektor::Vektor() // konstruktor default
{
x = y = mag = ang = 0.0;
mode = 'r';
}
// mengkonstruksi vektor dari koordinat rectangular jika mode r
// (default) atau dari koordinat polar jika mode p
Vektor::Vektor(double n1, double n2, char form)
{
mode = form;
if (form == 'r')
{
x = n1;
y = n2;
set_mag();
set_ang();
}
else if (form == 'p')
{
mag = n1;
ang = n2 / Rad_to_deg;
set_x();
set_y();
}
else
{
cout << "argument ketiga dari Vektor() salah ";
cout << "vektor dibuat menjadi 0\n";
x = y = mag = ang = 0.0;
mode = 'r';
}
}
// menetapkan vektor dari koordinat rectangular jika mode r
// (default) atau dari koordinat polar jika mode p
void Vektor:: set(double n1, double n2, char form)
{
mode = form;
if (form == 'r')
{
x = n1;
y = n2;
set_mag();
set_ang();
}
else if (form == 'p')
{
mag = n1;
ang = n2 / Rad_to_deg;
set_x();
set_y();
}
else
{
cout << "argument ketiga dari Vektor() salah ";
cout << "vektor dibuat menjadi 0\n";
x = y = mag = ang = 0.0;
mode = 'r';
}
}
Vektor::~Vektor()	// destruktor
{
}
void Vektor::polar_mode()	// ditetapkan menjadi mode polar
{
mode = 'p';
}
void Vektor::rect_mode()	// ditetapkan menjadi mode rectangular
{
mode = 'r';
}
// overloading operator
// menjumlahkan dua Vektor
Vektor Vektor::operator+(const Vektor & b) const
{
return Vektor(x + b.x, y + b.y);
}
// mengurangkan Vektor b dari a
Vektor Vektor::operator-(const Vektor & b) const
{
return Vektor(x - b.x, y - b.y);
}
// membalikkan tanda Vektor
Vektor Vektor::operator-() const
{
return Vektor(-x, -y);
}
// mengalikan vektor dengan n
Vektor Vektor::operator*(double n) const
{
return Vektor(n * x, n * y);
}
// metode-metode teman
// mengalikan n dengan Vektor a
Vektor operator*(double n, const Vektor & a)
{
return a * n;
}
// menampilkan koordinat rectangular jika mode  r,
// atau menampilkan koordinat polar jika mode  p
std::ostream & operator<<(std::ostream & os, const Vektor & v)
{
if (v.mode == 'r')
os << "(x,y) = (" << v.x << ", " << v.y << ")";
else if (v.mode == 'p')
{
os << "(m,a) = (" << v.mag << ", "
<< v.ang * Rad_to_deg << ")";
}
else
os << "Mode Objek Vektor INVALID";
return os;
}
} // akhir dari namespace VEKTOR