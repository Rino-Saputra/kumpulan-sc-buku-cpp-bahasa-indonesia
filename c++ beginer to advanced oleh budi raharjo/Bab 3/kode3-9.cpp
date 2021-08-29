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
  // Mendeklarasikan variabel X, Y, dan Z 
  // bertipe int
  int X = 10, Y = 3;
  int Z;	

  // Mendeklarasikan variabel A, B, dan C 
  // bertipe float
  float A = 10.0, B = 3.0;
  float C;

  // Melakukan operasi pembagian 
  // pada bilangan bulat
  Z = X / Y;

  // Melakukan operasi pembagian 
  // pada bilangan riil (floating-point)
  C = A / B;

  // Menampilkan hasil pembagian
  cout<<X<<" / "<<Y<<" 	= "<<Z<<endl;
  cout<<A<<" / "<<B<<" 	= "<<C;

  return 0;
}
