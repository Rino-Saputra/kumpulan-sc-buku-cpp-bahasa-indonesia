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
  // Mendeklarasikan array 
  // dengan melakukan inisialisasi nilai ke dalamnya
  int A[10] = { 12, 24, 14, 25, 10, 
                13, 21, 20, 15, 18 };
  int BIL;	  // Variabel untuk menampung 
             // nilai yang akan dicari

  // Menampilkan nilai yang terdapat 
  // pada elemen-elemen array di atas
  for (int C=0; C<10; C++) {
    cout<<"A["<<C<<"]: "
        <<A[C]<<endl;
  }
  cout<<endl;

  // Memasukkan nilai yang akan dicari
  cout<<"Masukkan nilai yang akan dicari: "; 
  cin>>BIL;

  // Melakukan pencarian data
  for (int J=0; J<10; J++) {
    if (A[J] == BIL) {
      cout<<"Nilai yang dicari "
          <<"terdapat pada indeks ke-"<<J;
      break;
    }
  }

  return 0;
}
