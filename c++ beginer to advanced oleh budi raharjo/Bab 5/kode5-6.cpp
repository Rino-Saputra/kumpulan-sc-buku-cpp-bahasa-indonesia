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
  char A;  // variabel A (bertipe char) akan digunakan 
           // sebagai indeks pengulangan
  int B;	// variabel B akan digunakan untuk 
           // menampung nilai penjumlahan
  int C;	// variabel C akan digunakan untuk 
           // menampung nilai perkalian

  for (A='a', B=0, C=1; A<='e'; A++, B=B+5, C=C*10) {
     cout<<"Nilai A = "<<A<<endl;
     cout<<"Nilai B = "<<B<<endl;
     cout<<"Nilai C = "<<C<<endl;
     cout<<endl;
  }

  return 0;
}
