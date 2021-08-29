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

// Membuat kelas dengan nama CONTOH
class CONTOH {
  int *X;
public:
  // Membuat constructor
  CONTOH(int XX) {
     X = new int;  // Memesan ruang memori
     *X = XX;
  }
  // Membuat destructor
  ~CONTOH() {
    delete X;  // Menghapus pointer X
  }
  void ShowX() {
    cout<<"Nilai X : "<<*X<<endl;
  }
  // ...
};

// Fungsi utama
int main() {

  CONTOH O(10);

  O.ShowX(); 

  return 0;
}
