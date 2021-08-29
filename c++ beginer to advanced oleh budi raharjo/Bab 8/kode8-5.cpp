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

// Parameter X sebagai masukan 
// dan parameter hasil sebagai keluaran
void TambahSatu(int X, int *hasil) {
  *hasil = X + 1;
}

int main() {

  int Bilangan, HASIL;

  cout<<"Masukkan sebuah bilangan bulat: "; 
  cin>>Bilangan;
  
  // Memanggil fungsi TambahSatu()
  TambahSatu(Bilangan, &HASIL);
  	
  // Menampilkan nilai 
  // setelah diproses di dalam fungsi
  cout<<"Nilai akhir: "<<HASIL;

  return 0;
}
