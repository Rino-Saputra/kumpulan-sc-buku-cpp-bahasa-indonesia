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

class INDUK {
  int X;
public:
  // Constructor pada kelas INDUK
  INDUK(int XX) {
     X = XX;
     cout<<"Constructor kelas INDUK"<<endl;
  }
  // Membuat fungsi GetX()
  int GetX() {
     return X;
  }
};

class TURUNAN: public INDUK {
  int Y;
public:
  // Constructor pada kelas TURUNAN
  TURUNAN(int XX, int YY): INDUK(XX) {
     Y = YY;
     cout<<"Constructor kelas TURUNAN"<<endl;
  }
  // Membuat fungsi GetY()
  int GetY() {
     return Y;
  }
};

// Fungsi utama
int main() {

  // Melakukan instansiasi 
  // terhadap kelas TURUNAN
  TURUNAN A(10, 20);

  // Melakukan pemanggilan fungsi 
  // melalui objek A
  cout<<"Nilai X: "<<A.GetX()<<endl;
  cout<<"Nilai Y: "<<A.GetY();

  return 0;
}
