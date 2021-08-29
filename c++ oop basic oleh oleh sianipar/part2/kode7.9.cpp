// kode7.9.cpp
#include <iostream>
#include <cmath>
int main()
{
using namespace std;
// menggunakan perataan kiri, menampilkan tanda +, menampilkan
// angka-angka nol setelah titik desimal, dengan kepresisian 3
cout.setf(ios_base::left, ios_base::adjustfield);
cout.setf(ios_base::showpos);
cout.setf(ios_base::showpoint);
cout.precision(3);
// menggunakan notasi-e dan menyimpan pengaturan format yang lama
ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
cout << "Perataan kiri:\n";
long n;
for (n = 1; n <= 41; n+= 10)
{
cout.width(4);
cout << n << "|";
cout.width(12);
cout << sqrt(double(n)) << "|\n";
}
// mengubah ke perataan internal
cout.setf(ios_base::internal, ios_base::adjustfield);
// merestorasi ke versi titik-tetap default
cout.setf(old, ios_base::floatfield);
cout << "Perataan internal:\n";
for (n = 1; n <= 41; n+= 10)
{
cout.width(4);
cout << n << "|";
cout.width(12);
cout << sqrt(double(n)) << "|\n";
}
// menggunakan perataan kanan, notasi titik-tetap
cout.setf(ios_base::right, ios_base::adjustfield);
cout.setf(ios_base::fixed, ios_base::floatfield);
cout << "Perataan kanan:\n";
for (n = 1; n <= 41; n+= 10)
{
cout.width(4);
cout << n << "|";
cout.width(12);
cout << sqrt(double(n)) << "|\n";
}
return 0;
}