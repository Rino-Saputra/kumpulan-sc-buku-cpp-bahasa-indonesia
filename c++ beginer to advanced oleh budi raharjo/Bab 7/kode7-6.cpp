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

  // Mendeklarasikan sebuah array 
  // dan melakukan inisialisasi ke dalamnya
  int A[10] = { 12, 34, 54, 32, 10, 
                67, 98, 11, 20, 22 };

  // Mendeklarasikan variabel max dan min 
  // untuk menampung nilai maksimum dan minumum
  int max = A[0], min = A[0];

  // Menentukan nilai maksimum
  for (int C=1; C<10; C++) {
     if (A[C] > max) {
       max = A[C];
     }
  }

  // Menentukan nilai minimum
  for (int c=1; c<10; c++) {
     if (A[c] < min) {
       min = A[c];
     }
  }

  // Menampilkan nilai maksimum dan minimum 
  // yang ditemukan dalam array
  cout<<"Nilai maksimum	: "<<max<<endl;
  cout<<"Nilai minimum	: "<<min;

  return 0;
}
