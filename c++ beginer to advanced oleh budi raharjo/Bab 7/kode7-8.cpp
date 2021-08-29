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

  // Mendeklarasikan array dengan 7 buah elemen 
  // yang bertipe int
  int A[7];

  // Mendeklarasikan variabel-variabel bantu 
  // yang diperlukan
  int j, k, C, temp;

  // Memasukkan nilai array
  cout<<"Masukkan nilai pada elemen array:"
      <<endl;
  for (C=0; C<7; C++) {
    cout<<"A["<<C<<" ] = "; cin>>A[C];
  }

  // Menampilkan nilai sebelum diurutkan
  cout<<"\nNilai elemen array sebelum diurutkan:"
      <<endl;
  for (C=0; C<7; C++) {
    cout<<"A["<<C<<"] = "<<A[C]<<endl;
  }

  // Melakukan pengurutan elemen array 
  // dengan metode maksimum-minimum
  int jmaks, U=6;

  for (j=0; j<6; j++) {
    jmaks = 0;
    for (k=1; k<=U; k++) {	      
      if (A[k] > A[jmaks]) {
        jmaks = k;
      }
    }
    temp = A[U];
    A[U] = A[jmaks];
    A[jmaks] = temp;
    U--;
  }

  // Menampilkan nilai setelah diurutkan
  cout<<"\nNilai elemen array setelah diurutkan:"
      <<endl;
  for (C=0; C<7; C++) {
    cout<<"A["<<C<<"] = "<<A[C]<<endl;
  }

  return 0;
}
