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
  // Mendeklarasikan variabel y 
  // dengan tipe data bool
  bool benar;

  // Meminta input dari user
  int a, b;
  cout<<"Masukkan nilai a: "; cin>>a;
  cout<<"Masukkan nilai b: "; cin>>b;

  // Melakukan assigment terhadap variabel benar
  benar = a > b;

  if (benar == true) {   // bisa ditulis: if (benar) {
    cout<<"a lebih besar dari b";
  } else {
    cout<<"a lebih kecil dari atau sama dengan b";
  }

  return 0;
}
