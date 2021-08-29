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
  int C;	// Mendeklarasikan varaiebl C sebagai 
                // indeks pengulangan

  C = 0;	// Melakukan inisialisasi nilai terhadap 
                // variabel C

  while (C<10) {
     cout<<"Saya sangat menyukai C++"<<endl;
     C++;	/* Statemen ini berguna untuk menaikkan nilai, 
              dan setelah bernilai 10, 
              maka pengulangan akan dihentikan */
  }

  return 0;
}
