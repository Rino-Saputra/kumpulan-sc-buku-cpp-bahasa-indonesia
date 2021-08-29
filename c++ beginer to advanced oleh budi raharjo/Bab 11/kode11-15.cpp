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

// Membuat kelas BALOK
class BALOK {
  double p;
  double l;
  double t;
public:
  void SetData(double p, double l, double t) {
    this->p = p;
    this->l = l;
    this->t = t;
  }

  double GetVolume() {
    return (p * l * t);
  }

  void ShowVolume() {
    cout<<"Volume balok: "
        <<GetVolume();
  }
};

int main() {
  // Mendeklarasikan objek b
  // bertipe BALOK
  BALOK b;

  // Memanggil fungsi SetData()
  b.SetData(5.0, 3.0, 2.0);

  // Memanggil fungsi ShowVolume()
  b.ShowVolume();

  return 0;
}
