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
  int GetX() {
    return X;
  }
};

CONTOH MyFunc() {
  CONTOH A;

  A.SetX(30);

  // Mengembalikan nilai berupa objek
  return A;
}

int main() {

  CONTOH O;

  // Memanggil fungsi MyFunc() 
  // dan nilainya dimasukkan 
  // ke dalam objek O
  O = MyFunc();

  cout<<"Nilai X di dalam O adalah: "
      <<O.GetX();

  return 0;
}
