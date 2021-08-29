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

class CONTOH {
  int X;
public:
  // Mendeklarasikan fungsi set_X()
  void set_X(int XX);
  // Mendeklarasikan fungsi get_X()
  int get_X();	
};

// Bagian implementasi dari fungsi set_X()
void CONTOH::set_X(int XX) {
  X = XX;
}

// Bagian implementasi dari fungsi get_X()
int CONTOH::get_X() {
  return X;
}

// Fungsi utama
int main() {

  // Membuat instance dari kelas CONTOH 
  // dengan nama ob
  CONTOH ob;

  // Mengakses fungsi set_X()
  // yang terdapat pada kelas CONTOH
  ob.set_X(100);

  // Mengakses fungsi get_X()
  // yang terdapat pada kelas CONTOH
  cout<<ob.get_X();

  return 0;
}
