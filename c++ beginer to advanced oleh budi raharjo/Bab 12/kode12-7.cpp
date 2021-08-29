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

// Membuat kelas INDUK1
class INDUK1 {
  int X;
public:
  // Constructor pada kelas INDUK1
  INDUK1(int XX) {
     X = XX;
     cout<<"Constructor kelas INDUK1"<<endl;
  }
  // Membuat fungsi GetX()
  int GetX() {
     return X;
  }
};

// Membuat kelas INDUK2
class INDUK2 {
  int Y;
public:
  // Constructor pada kelas INDUK2
  INDUK2(int YY) {
     Y = YY;
     cout<<"Constructor kelas INDUK2"<<endl;
  }
  // Membuat fungsi GetY()
  int GetY() {
     return Y;
  }
};

// Membuat kelas TURUNAN 
// yang diturunkan dari 
// kelas INDUK1 dan INDUK2
class TURUNAN: public INDUK1, public INDUK2 {
  int Z;
public:
  // Constructor pada kelas TURUNAN
  TURUNAN(int XX, int YY, int ZZ): 
  INDUK1(XX), INDUK2(YY) {
     Z = ZZ;
     cout<<"Constructor kelas TURUNAN"<<endl;
  }
  // Membuat fungsi GetZ()
  int GetZ() {
     return Z;
  }
};

// Fungsi utama
int main() {

  // Melakukan instansiasi
  // terhadap kelas TURUNAN
  TURUNAN A(10, 20, 30);

  // Melakukan pemanggilan fungsi 
  // melalui objek A
  cout<<"Nilai X: "<<A.GetX()<<endl;
  cout<<"Nilai Y: "<<A.GetY()<<endl;
  cout<<"Nilai Z: "<<A.GetZ();

  return 0;
}
