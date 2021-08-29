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

// Membuat fungsi dengan parameter 
// bertipe masukan
int TambahSatu(int X) {
  int hasil;
  hasil = X + 1;
  return hasil;
}

int main() {

  /* Mendeklarasikan variabel 
     yang akan digunakan sebagai 
     nilai parameter pada saat pemanggilan */
  int Bilangan, HASIL;
	
  cout<<"Masukkan sebuah bilangan bulat: "; 
  cin>>Bilangan;
	
  HASIL = TambahSatu(Bilangan);

  // Menampilkan nilai 
  // setelah diproses di dalam fungsi
  cout<<"Nilai akhir: "<<HASIL;

  return 0;
}
