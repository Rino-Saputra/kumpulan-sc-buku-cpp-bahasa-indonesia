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
  int X, Y;

  // Menggeser 1 bit ke kiri 
  // dari bentuk biner bilangan 1
  X = 1 << 1;

  // Menggeser 2 bit ke kiri 
  // dari bentuk biner bilangan 1
  Y = 1 << 2;
	
  // Menampilkan hasil 
  cout<<"1 << 1 = "<<X<<endl;
  cout<<"1 <<  2 = "<<Y;

  return 0;
}
