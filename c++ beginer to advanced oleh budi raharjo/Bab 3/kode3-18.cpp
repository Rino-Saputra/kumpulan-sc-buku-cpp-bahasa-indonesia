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

  cout<<"Masukkan nilai X : "; cin>>X;

  // Melakukan pemeriksaan
  // terhadap nilai X
  if (X < 0)  {
    X = -X;
  }

  // Menampilkan nilai X 
  // setelah proses pengecekan
  cout<<"| X | = "<<X;

  return 0;
}
