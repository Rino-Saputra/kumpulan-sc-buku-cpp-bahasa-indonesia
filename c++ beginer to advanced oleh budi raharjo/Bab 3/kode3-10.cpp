/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {
  // Mendeklarasikan variabel X (diisi nilai 10) 
  // dan Y (diisi nilai 3)
  int X = 10, Y = 3;

  int Z;	// Mendeklarasikan variabel Z sebagai 
           // penampung nilai hasil operasi

  // Melakukan operasi pembagian dan menyimpan 
  // sisa baginya ke dalam Z
  Z = X % Y;

  // Menampilkan sisa bagi 
  // dari operasi pembagian X / Y
  cout<<X<<" % "<<Y<<" = "<<Z;

  return 0;
}
