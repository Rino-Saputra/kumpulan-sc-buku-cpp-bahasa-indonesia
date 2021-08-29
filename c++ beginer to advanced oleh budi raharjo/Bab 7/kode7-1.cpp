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

  // Memasukkan nilai ke dalam elemen array
  for (int C=0; C<5; C++) {
    cout<<"A["<<C<<"] = "; cin>>A[C];
  }

  return 0;
}
