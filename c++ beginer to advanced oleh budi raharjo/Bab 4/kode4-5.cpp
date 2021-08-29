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
  int bil;

  cout<<"Masukkan sebuah bilangan bulat "
      <<"yang akan diperiksa: "; 
  cin>>bil;

  if (bil > 0) {
    cout<<bil<<" adalah bilangan POSITIF";
  } else if (bil < 0) {
    cout<<bil<<" adalah bilangan NEGATIF";
  } else {
    cout<<"Anda memasukkan bilangan NOL";
  }

  return 0;
}
