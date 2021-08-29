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

// Membuat kelas turunan dengan nama TURUNAN
class TURUNAN: public INDUK {
  int Y;
public:
  void SetY(int YY) {
    Y = YY;
  }
  int GetY() {
    return Y;
  }
};

// Fungsi utama
int main() {

  // Melakukan instansiasi 
  // terhadap kelas INDUK
  INDUK A;

  // Memanggil fungsi-fungsi 
  // milik kelas INDUK dari kelas INDUK
  A.SetX(12);

  cout<<"Nilai X yang dipanggil "
      <<"dari kelas INDUK: ";
  cout<<A.GetX()<<endl;

  // Melakukan instansiasi 
  // terhadap kelas TURUNAN
  TURUNAN B;

  // Melakukan pemanggilan fungsi-fungsi 
  // yang terdapat pada kelas TURUNAN
  B.SetY(40);

  cout<<"Nilai Y yang terdapat "
      <<"pada kelas TURUNAN : ";
  cout<<B.GetY()<<endl;

  // Memanggil fungsi-fungsi 
  // milik kelas INDUK dari kelas TURUNAN
  B.SetX(35);

  cout<<"Nilai X yang dipanggil "
      <<"dari kelas TURUNAN : ";
  cout<<B.GetX()<<endl;

  return 0;
}
