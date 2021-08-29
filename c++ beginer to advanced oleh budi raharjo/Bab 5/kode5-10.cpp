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
  int BIL;
  long faktorial = 1;

  cout<<"Masukkan bilangan yang akan dihitung: ";
  cin>>BIL;
  int C = BIL;
  cout<<C<<"! = ";
  while (C >= 1) {
    faktorial *= C;	// faktorial = faktorial * C;
    if (C != 1) {
      cout<<C<<" x ";
    } else {
      cout<<C<<" = ";
    }
    C--;	// Menurunkan nilai variabel C
  }
  cout<<faktorial;

  return 0;
}
