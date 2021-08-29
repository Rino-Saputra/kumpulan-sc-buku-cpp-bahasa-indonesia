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

// Mendefinisikan fungsi inline 
// yang mengalikan bilangan dengan 2
inline int Kali2(int X) {
  return X * 2;	// yang dicetak tebal 
                // adalah statemen yang akan 
                // disalin (di-copy)
}

// Fungsi utama
int main() {
  int HASIL;

  // Melakukan pemanggilan fungsi inline 
  // untuk pertama kali
  HASIL = 10 * 2; // Penyalinan statemen 
                  // untuk X = 10
  cout<<"Hasil = "<<HASIL<<endl;

  // Melakukan pemanggilan fungsi inline 
  // untuk kedua kali
  HASIL = 20 * 2; // Penyalinan statemen 
                  // untuk X = 20
  cout<<"Hasil = "<<HASIL<<endl;

  // Melakukan pemanggilan fungsi inline 
  // untuk ketiga kali
  HASIL = 30 * 2; // Penyalinan statemen 
                  // untuk X = 30
  cout<<"Hasil = "<<HASIL<<endl;

  return 0;
}
