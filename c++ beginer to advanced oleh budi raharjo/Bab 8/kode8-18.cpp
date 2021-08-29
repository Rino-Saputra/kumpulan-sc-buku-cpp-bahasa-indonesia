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

// Mendefinisikan fungsi Tulis()
// dengan parameter bertipe char*
void Tulis(char* X) {
  cout<<X<<endl;
}

// Mendefinisikan fungsi Tulis()
// dengan parameter bertipe int
void Tulis(int X) {
  cout<<X<<endl;
}

// Mendefinisikan fungsi Tulis()
// dengan parameter bertipe double
void Tulis(double X) {
  cout<<X<<endl;
}

// Fungsi utama
int main() {

  // Melakukan pemanggilan fungsi Tulis()
  Tulis((char*) "C++");
  Tulis(100);
  Tulis(21.0378);

  return 0;
}
