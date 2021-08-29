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

// Mendefinisikan fungsi 
// untuk menghitung keliling lingkaran
double KelilingLingkaran(const float PI, 
                         int jari_jari) {
  return (2*PI*jari_jari);
}

// Fungsi utama
int main() {
  int r;
  double HASIL;

  cout<<"Masukkan panjang jari-jari lingkaran: "; 
  cin>>r;

  // Memanggil fungsi KelilingLingkaran
  HASIL = KelilingLingkaran(3.14, r);

  // Menampilkan hasil yang didapatkan
  cout<<"Keliling lingkaran = "<<HASIL;

  return 0;
}
