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

  // Mendeklarasikan tipe data 
  // berbentuk array dengan nama LARIK
  typedef int LARIK[5];

  // Menggunakan tipe data LARIK 
  // untuk mendeklarasikan variabel A
  LARIK A;

  for (int C=0; C<5; C++) {
    // Mengisikan nilai elemen 
    // ke dalam variabel A
    A[C] = (C+1) * 100;

    // Menampilkan nilai elemen 
    // yang terdapat pada variabel A
    cout<<"A["<<C<<"] = "<<A[C]<<endl;
  }

  return 0;
}
