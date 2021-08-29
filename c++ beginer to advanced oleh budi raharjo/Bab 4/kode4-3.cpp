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
  int bilangan;

  cout<<"Masukkan bilangan bulat "
      <<"yang akan diperiksa: "; 
  cin>>bilangan;

  // Melakukan pengecekan bilangan apakah habis 
  // dibagi dua atau tidak
  if (bilangan % 2 == 0) {
    cout<<bilangan<<" adalah bilangan genap";
  } else {
    cout<<bilangan<<" adalah bilangan ganjil";
  }

  return 0;
}
