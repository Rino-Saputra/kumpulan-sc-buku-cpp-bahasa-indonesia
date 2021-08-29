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

// Membuat prototipe (deklarasi fungsi)

// Mendeklarasikan fungsi Kali()
int Kali(int X, int Y);
// Mendeklarasikan fungsi Tulis()
void Tulis(int S);

// Fungsi Utama
int main() {
  int Bilangan1, Bilangan2, HASIL;

  cout<<"Masukkan bilangan pertama : ";
  cin>>Bilangan1;

  cout<<"Masukkan bilangan kedua   : "; 
  cin>>Bilangan2;
  cout<<endl;

  // Menggunakan fungsi Kali()
  HASIL = Kali(Bilangan1, Bilangan2);

  // Menggunakan fungsi Tulis()
  Tulis(HASIL);

  return 0;
}

// Membuat definisi fungsi Kali()
int Kali(int X, int Y) {
  return (X * Y);
}

// Membuat definisi fungsi Tulis()
void Tulis(int S) {
  cout<<S<<endl;
}
