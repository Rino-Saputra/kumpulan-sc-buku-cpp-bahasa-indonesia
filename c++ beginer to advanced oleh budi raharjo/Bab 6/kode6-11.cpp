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
#include <cstdlib>

using namespace std;

int main() {
  int *P;
  // Mengalokasikan 10 ruang di memori
  // untuk tipe data int
  P = (int *) malloc(10*sizeof(int));

  // Mengisikan dan sekaligus 
  // menampilkan nilai yang disimpan
  for (int C=0; C<10; C++) {
     *P = (C+1) * 10;
     cout<<*P<<endl;
     P += 1;	// P menunjuk ke alamat berikutnya
  }

  return 0;
}
