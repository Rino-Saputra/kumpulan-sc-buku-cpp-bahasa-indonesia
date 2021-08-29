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

// Membuat fungsi untuk menghitung M pangkat e
int Hitung(register int M, register int e) {
  register int temp;
  temp = 1;
  for ( ; e; e--) {
    temp = temp * M;
  }
  return temp;
}

// Fungsi utama
int main() {
  int X;
  X = Hitung(5, 3);	// 5 pangkat 3
  cout<<X<<endl;

  return 0;
}
