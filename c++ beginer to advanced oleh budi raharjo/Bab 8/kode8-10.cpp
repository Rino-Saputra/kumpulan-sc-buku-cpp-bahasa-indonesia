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

// Mendefinsikan fungsi 
// untuk menukarkan dua buah bilangan
void TukarBilangan(int& X, int& Y) {
  int Z = X;
  X = Y;
  Y = Z;

  // Menampilkan bilangan 
  // yang terdapat di dalam fungsi
  cout<<"Di dalam fungsi"<<endl;
  cout<<"Bilangan ke-1: "<<X<<endl;
  cout<<"Bilangan ke-2: "<<Y<<endl;
  cout<<endl;
}

// Fungsi utama
int main() {

  // Mendeklarasikan variabel 
  // Bilangan1 dan Bilangan2
  int Bilangan1, Bilangan2;

  cout<<"Masukkan bilangan pertama: "; 
  cin>>Bilangan1;
  cout<<"Masukkan bilangan kedua  : "; 
  cin>>Bilangan2;
  cout<<endl;
  
  // Menampilkan nilai awal
  cout<<"Keadaan awal"<<endl;
  cout<<"Bilangan ke-1: "<<Bilangan1<<endl;
  cout<<"Bilangan ke-2: "<<Bilangan2<<endl;
  cout<<endl;
	
  // Memanggil fungsi TukarBilangan()
  TukarBilangan(Bilangan1, Bilangan2);

  // Menampilkan nilai akhir 
  // setelah pemanggilan fungsi TukarBilangan()
  cout<<"Keadaan akhir"<<endl;
  cout<<"Bilangan ke-1: "<<Bilangan1<<endl;
  cout<<"Bilangan ke-2: "<<Bilangan2;

  return 0;
}
