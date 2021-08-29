/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

// Contoh Program yang SALAH

#include <iostream>

using namespace std;

int main() {

  int C;   // Mendeklarasikan varaiebl C 
           // sebagai indeks pengulangan

  C = 0;   // Melakukan inisialisasi nilai
           // terhadap variabel C

  while (C<10) {
    cout<<"Saya sangat menyukai C++"<<endl;
    /* Pada baris ini tidak terdapat statemen increment
       sehingga C akan terus bernilai 0 
       dan kondisi C<10 akan selalu bernilai benar.
       Akibatnya, pengulangan akan terus dilakukan */
  }

  return 0;
}
