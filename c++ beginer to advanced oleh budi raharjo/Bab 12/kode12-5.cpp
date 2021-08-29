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

// Membuat kelas dengan nama INDUK1
class INDUK1 {
  int X;
public:
  void SetX(int XX) {
    X = XX;
  }
  int GetX() {
     return X;
  }
};

// Membuat kelas dengan nama INDUK2 
// yang tidak memiliki relasi 
// dengan kelas INDUK1
class INDUK2 {
  int Y;
public:
  void SetY(int YY) {
    Y = YY;
  }
  int GetY() {
     return Y;
  }
};

// Membuat kelas TURUNAN 
// yang merupakan turunan 
// dari kelas INDUK1 dan INDUK2
class TURUNAN: public INDUK1, public INDUK2 {
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
  // terhadap kelas TURUNAN
  TURUNAN A;

  // Memanggil fungsi-fungsi 
  // yang terdapat pada kelas TURUNAN
  A.SetX(100);
  A.SetY(200);
  A.SetZ(300);

  // Menampikan nilai yang telah diisikan
  cout<<"Nilai X\t: "<<A.GetX()<<endl;
  cout<<"Nilai Y\t: "<<A.GetY()<<endl;
  cout<<"Nilai Z\t: "<<A.GetZ();

  return 0;
}
