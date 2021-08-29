/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

// Contoh program yang salah

#include <iostream>

using namespace std;

int main() {

  int C;
	
  // Mendeklarasikan array yang bersifat konstan
  const int A[5] = { 10, 20, 30, 40, 50 };

  // Mengubah nilai pada elemen array 
  // menjadi 1, 2, 3, 4 dan 5
  for (C=0; C<5; C++) {
    A[C] = C+1; // akan menyebabkan 
                // kesalahan pada saat kompilasi
  }

  // Menampilkan nilai 
  // yang terdapat pada array A
  for (C=0; C<5; C++) {
    cout<<"A["<<C<<"] = "<<A[C]<<endl;
  }

  return 0;
}
