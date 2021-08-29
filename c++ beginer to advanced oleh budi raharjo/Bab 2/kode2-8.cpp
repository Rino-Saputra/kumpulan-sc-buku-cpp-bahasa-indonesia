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

int A;	// Variabel A adalah variabel global 
           // karena dideklarasikan di luar fungsi

// Membuat fungsi test()
void test() {
  // Mengisikan (assign) nilai ke dalam variabel A
  A = 20;	 
  cout<<"Nilai A di dalam fungsi test(): "<<A<<endl;
}

// Membuat fungsi main() atau fungsi utama
int main() {
  // Mengisikan (assign) nilai ke dalam variabel A
  A = 10;	 
  cout<<"Nilai A di dalam fungsi main(): "<<A<<endl;

  // Memanggil fungsi test()
  test();

  return 0;
}
