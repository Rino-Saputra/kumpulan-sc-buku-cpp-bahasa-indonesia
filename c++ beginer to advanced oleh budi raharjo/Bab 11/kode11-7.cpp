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
  void SetX(int XX) {
    X = XX;
  }
  int KuadratX() {
    return X * X;
  }
  // ...
};

// Fungsi utama
int main() {

  CONTOH O;
  int hasil;

  // Melakukan pemanggilan terhadap 
  // fungsi-fungsi yang terdapat
  // di dalam kelas CONTOH
  O.SetX(10);
  hasil = O.KuadratX();
  cout<<"Hasil: "<<hasil;

  return 0;
}
