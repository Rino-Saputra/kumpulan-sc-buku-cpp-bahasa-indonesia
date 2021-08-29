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

  // Meminta user untuk memasukkan nilai X 
  // dari keyboard
  cout<<"Masukkan nilai X : "; cin>>X;
  cout<<'\n';

  // Melakukan pemeriksaan terhadap nilai X
  X = (X < 0) ? -X : X; 

  // Menampilkan nilai X 
  // setelah proses pemeriksaan
  cout<<"| X | = "<<X;

  return 0;
}
