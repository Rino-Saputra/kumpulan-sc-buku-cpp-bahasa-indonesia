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

// Membuat fungsi test()
void test() {
  int A;	// A bersifat lokal
           // dan hanya dikenal oleh fungsi test()
  A = 20;	 
  cout<<"Nilai A di dalam fungsi test(): "<<A<<endl;
}

// Membuat fungsi main() atau fungsi utama
int main() {
  // A tidak dapat digunakan oleh fungsi main()
  // A = 10; 	// SALAH
  // cout<<"Nilai A di dalam fungsi main(): "
  //     <<A<<endl;	// SALAH

  // Memanggil fungsi test()
  test();

  return 0;
}
