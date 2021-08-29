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

enum BOOLEAN { FALSE, TRUE };

int main() {
  int X;

  BOOLEAN STOP = FALSE;
  while (!STOP) {
    cout<<"Masukkan nilai X: "; cin>>X;
    if (X <= 0) {
      cout<<"Nilai x tidak boleh negatif atau 0\n";
      continue;
    }
    STOP = TRUE;  // akan menghentikan pengulangan
  }	

  if (STOP) {
    cout<<"Anda telah memasukkan nilai "<<X;
  }

  return 0;
}
