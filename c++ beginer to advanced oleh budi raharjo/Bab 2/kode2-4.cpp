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

#define MAX 5

int main() {
  int A[MAX];

  // MAX = 10;	// SALAH, 
                // nilai konstanta tidak dapat ubah

  for (int C=0; C<MAX; C++) {
    // mengisi nilai ke dalam A[C]
    A[C] = C * 10;
    // menampilkan nilai A[C]
    cout<<A[C]<<endl;
  }

  return 0;
}
