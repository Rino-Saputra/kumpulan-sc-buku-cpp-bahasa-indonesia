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

// Membuat kelas dasar dengan nama INDUK
class INDUK {
  int X;
public:
  void SetX(int XX) {
    X = XX;
  }
  int GetX() {
    return X;
  }
};

// Membuat kelas turunan dari kelas INDUK 
// dengan nama TURUNAN1
class TURUNAN1: public INDUK {
  int Y;
public:
  void SetY(int YY) {
    Y = YY;
  }
  int GetY() {
    return Y;
  }
};

// Membuat kelas turunan dari kelas TURUNAN1 
// dengan nama TURUNAN2
class TURUNAN2: public TURUNAN1 {
  int Z;
public:
  void SetZ(int ZZ) {
    Z = ZZ;
  }
  int GetZ() {
    return Z;
  }
};

// Fungsi utama
int main() {

  // Melakukan instansiasi 
  // terhadap kelas TURUNAN2
  TURUNAN2 A;

  // Menentukan nilai X, Y, dan Z 
  // melalui kelas TURUNAN2
  A.SetX(20);
  A.SetY(30);
  A.SetZ(40);

  // Menampilkan nilai X, Y, dan Z 
  // melalui kelas TURUNAN2
  cout<<"Nilai X yang dipanggil "
      <<"dari kelas TURUNAN2: ";
  cout<<A.GetX()<<endl;
  cout<<"Nilai Y yang dipanggil "
      <<"dari kelas TURUNAN2: ";
  cout<<A.GetY()<<endl;
  cout<<"Nilai Z yang dipanggil "
      <<"dari kelas TURUNAN2: ";
  cout<<A.GetZ()<<endl;

  return 0;
}
