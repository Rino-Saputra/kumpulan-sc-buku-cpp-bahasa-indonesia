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
  void *P;	 // Mendeklarasikan pointer P 
            // sebagai pointer tanpa tipe

  // Mendeklarasikan variabel X, Y dan Z
  // dengan tipe berbeda
  int X;
  long Y;
  double Z;

  // Memerintahkan P untuk menunjuk 
  // ke alamat dari variabel X
  P = &X;
  X = 10;	// Mengisikan variabel X dengan nilai 10

  // Menampilkan hasil
  cout<<"Nilai X  : "<<X<<endl;
  cout<<"Nilai P  : "<<P<<endl;
  cout<<"Nilai &X : "<<&X<<endl;
  cout<<endl;

  // Memerintahkan P untuk menunjuk 
  // ke alamat dari variabel Y
  P = &Y;
  Y = 2000; // Mengisikan variabel Y dengan nilai 2000

  // Menampilkan hasil
  cout<<"Nilai Y  : "<<Y<<endl;
  cout<<"Nilai P  : "<<P<<endl;
  cout<<"Nilai &Y : "<<&Y<<endl;
  cout<<endl;

  // Memerintahkan P untuk menunjuk 
  // ke alamat dari variabel Z
  P = &Z;
  Z = 21.0378;	// Mengisikan variabel Z 
                // dengan nilai 21.0378

  // Menampilkan hasil
  cout<<"Nilai Z  : "<<Z<<endl;
  cout<<"Nilai P  : "<<P<<endl;
  cout<<"Nilai &Z : "<<&Z<<endl;

  return 0;
}
