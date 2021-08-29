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

int Kuadrat(CONTOH A, int N) {
  A.SetX(N);
  return (A.GetX() * A.GetX());
}

int main() {

  CONTOH O;

  // Memanggil fungsi Kuadrat
  cout<<"Kuadrat dari 10 adalah: "
      <<Kuadrat(O,10);

  return 0;
}
