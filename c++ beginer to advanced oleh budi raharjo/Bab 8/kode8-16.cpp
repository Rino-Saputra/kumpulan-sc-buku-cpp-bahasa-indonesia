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

// Mendefinsikan fungsi tambah
int Tambah(int X, int Y) {
  return (X + Y);
}

// Fungsi utama
int main() {
  // Mendeklarasikan pointer ke fungsi Tambah() 
  // dengan parameter (int, int)
  int (*P) (int, int);

  // Variabel untuk menampung nilai balik
  int HASIL;
  // Variabel yang akan digunakan
  // sebagai parameter
  int a=20, b =5;	 
  

  // Memanggil fungsi Tambah()
  // dan menyimpan nilainya 
  // ke variabel HASIL
  HASIL = Tambah(a, b);

  // Memerintahkan P untuk menunjuk 
  // alamat dari fungsi Tambah()
  P = Tambah;

  // Menampilkan hasil melalui pointer P
  cout<<"Nilai (*P)(20,5) : "
      <<(*P)(a,b)<<endl;

  // Menampilkan hasil melalui variabel HASIL
  cout<<"Nilai HASIL : "
      <<HASIL<<endl;

  // Menampilkan alamat 
  // yang ditunjuk oleh pointer P
  cout<<"Nilai P : "<<P<<endl;

  // Menampilkan alamat dari fungsi Tambah()
  cout<<"Nilai Tambah : "<<Tambah<<endl;

  return 0;
}
