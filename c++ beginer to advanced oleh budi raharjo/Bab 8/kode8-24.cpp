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

// Mendefinisikan fungsi Faktorial()
int Faktorial(int X) {
  if (X==1) return(1);
  // Memanggil dirinya sendiri
  return X * Faktorial(X-1);
}

// Fungsi utama
int main() {
  int Bilangan, HASIL;
  cout<<"Masukkan bilangan yang akan dihitung: "; 
  cin>>Bilangan;

  // Memanggil fungsi Faktorial()
  HASIL = Faktorial(Bilangan);

  // Menampilkan hasil
  cout<<Bilangan<<"! = "<<HASIL;

  return 0;
}
