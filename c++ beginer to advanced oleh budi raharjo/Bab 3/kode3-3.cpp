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
  int X;
  float Y;

  X = +5;  // Dapat ditulis dengan X = 5, 
           // yang berarti memasukkan nilai positif 5
  Y = -2.12;	// Memasukkan nilai negatif 2.12

  // Menampilkan nilai 
  // yang disimpan dalam variabel X dan Y
  cout<<"Nilai X : "<<X<<endl;
  cout<<"Nilai Y : "<<Y<<endl;

  X = -X;	// Mengubah nilai X menjadi negatif
  Y = -Y;

  // Menampilkan kembali nilai yang disimpan 
  // dalam variabel X dan Y
  cout<<"Nilai X : "<<X<<endl;
  cout<<"Nilai Y : "<<Y<<endl;

  return 0;
}
