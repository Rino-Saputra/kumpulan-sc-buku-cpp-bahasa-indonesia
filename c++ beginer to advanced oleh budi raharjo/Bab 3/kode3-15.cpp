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

  // Menggeser 1 bit ke kanan 
  // dari bentuk biner bilangan 16
  X = 16 >> 1;

  // Menggeser 2 bit ke kanan 
  // dari bentuk biner bilangan 16
  Y = 16 >> 2;
	
  // Menampilkan hasil 
  cout<<"16 >> 1 = "<<X<<endl;
  cout<<"16 >> 2 = "<<Y;

  return 0;
}
