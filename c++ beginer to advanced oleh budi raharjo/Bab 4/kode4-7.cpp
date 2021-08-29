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
  double nilai;
  char indeks;	

  // Meminta user untuk menentukan nilai 
  // yang diperoleh dalam bentuk bilangan
  cout<<"Masukkan nilai yang diperoleh: ";
  cin>>nilai;

  // Melakukan konversi nilai numerik
  // menjadi nilai indeks
  if (nilai >= 85) {
    indeks = 'A';
  } else if (nilai >= 70) {
    indeks = 'B';
  } else if (nilai >= 55) {
    indeks = 'C';
  } else if (nilai >= 40) {
    indeks = 'D';
  } else {
    indeks = 'E';
  }

  // Menampilkan nilai indeks yang didapatkan
  cout<<"Nilai indeks dari nilai "
      <<nilai<<" adalah "<<indeks;

  return 0;
}
