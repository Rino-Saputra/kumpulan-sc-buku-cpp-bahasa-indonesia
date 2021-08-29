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

  // Mendefinisikan tipe data 
  // yang berupa array dua dimensi
  typedef int MATRIK32 [3][2];

  // Mendeklarasikan array A 
  // sebagai array dua dimensi
  MATRIK32 A, B, C;

  int j, k; // Mendeklarasikan variabel 
            // untuk indeks pengulangan

  // Mengisikan nilai 
  // ke dalam elemen-elemen array A
  for (j=0; j<3; j++) {
    for (k=0; k<2; k++) {
      cout<<"A["<<j<<"]["<<k<<"] = "; 
      cin>>A[j][k];
    }
  }
  cout<<endl;

  // Mengisikan nilai 
  // ke dalam elemen-elemen array B
  for (j=0; j<3; j++) {
    for (k=0; k<2; k++) {
      cout<<"B["<<j<<"]["<<k<<"] = "; 
      cin>>B[j][k];
    }
  }
  cout<<endl;

  // Melakukan penjumlahan A dan B 
  // dan menyimpan hasilnya ke dalam array C
  for (j=0; j<3; j++) {
    for (k=0; k<2; k++) {
      C[j][k] = A[j][k] + B[j][k];
    }
  }

  // Menampilkan hasil penjumlahan
  for (j=0; j<3; j++) {
    for (k=0; k<2; k++) {
      cout<<"C["<<j<<"]["<<k<<"] = "
          <<C[j][k]<<endl;
    }
  }

  return 0;
}
