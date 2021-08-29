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
// dan juga sebagai keluaran
void TambahSatu(int *X) {
  *X= *X + 1;
}

// Fungsi utama
int main() {

  int Bilangan;

  cout<<"Masukkan sebuah bilangan bulat: "; 
  cin>>Bilangan;
  
  // Memanggil fungsi TambahSatu()
  TambahSatu(&Bilangan);
  
  // Menampilkan nilai 
  // setelah diproses di dalam fungsi
  cout<<"Nilai akhir: "<<Bilangan;

  return 0;
}
