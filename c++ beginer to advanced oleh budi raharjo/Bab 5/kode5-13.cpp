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
  int Bil1, Bil2;
  int sisa;

  cout<<"Masukkan bilangan pertama  : "; cin>>Bil1;
  cout<<"Masukkan bilangan kedua    : "; cin>>Bil2;

  // Melakukan pertukaran nilai
  if (Bil1 < Bil2) {
    int temp = Bil1;
    Bil1 = Bil2;
    Bil2 = temp;
  }

  do {
    sisa = Bil1 % Bil2;
    Bil1 = Bil2;
    Bil2 = sisa;	    
  } while (sisa != 0);

  cout<<"\nFaktor persekutuan terbesar = "<<Bil1;

  return 0;
}
