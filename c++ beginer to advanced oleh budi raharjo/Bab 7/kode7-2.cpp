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

  // Mendeklarasikan array A 
  // dengan 5 buah elemen bertipe int
  int A[5];

  // Mengisikan nilai ke dalam elemen array
  cout<<"Masukkan nilai yang diinginkan"<<endl;
  for (int C=0; C<5; C++) {
    cout<<"A["<<C<<"] = "; cin>>A[C];
  }

  cout<<'\n';

  // Menampilkan nilai yang terdapat dalam elemen array
  cout<<"Menampilkan nilai yang telah dimasukkan"<<endl;
  for (int J=0; J<5; J++) {
    cout<<"Nilai yang terdapat pada elemen ke-";
    cout<<J+1<<": "<<A[J]<<endl;
  }

  return 0;
}
