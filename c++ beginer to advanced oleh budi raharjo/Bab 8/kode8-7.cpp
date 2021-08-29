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

// Membuat fungsi dengan melewatkan 
// nilai X ke dalamnya
void Kali2(int X) {
  X = X * 2;
  cout<<"Nilai di dalam fungsi: "<<X<<endl;
}

// Fungsi utama
int main() {
  int Bilangan;

  cout<<"Masukkan sebuah bilangan bulat: ";
  cin>>Bilangan;
  cout<<endl;

  // Menampilkan nilai awal
  cout<<"Nilai awal: "<<Bilangan<<endl;

  // Memanggil fungsi Kali2
  Kali2(Bilangan);

  // Menampilkan nilai akhir
  cout<<"Nilai akhir: "<<Bilangan<<endl;

  return 0;
}
