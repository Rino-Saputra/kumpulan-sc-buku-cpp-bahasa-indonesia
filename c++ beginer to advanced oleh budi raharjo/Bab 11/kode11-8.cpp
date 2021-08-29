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

// Membuat kelas DASAR 
// yang didalamnya terdapat data 
// bersifat protected

class DASAR {
protected:
  int X;
public:
  // Inisialisasi nilai X dengan nilai 10
  DASAR() { X = 10; }
  //...
};

// Membuat kelas TURUNAN 
// yang merupakan turunan 
// dari kelas DASAR
class TURUNAN: public DASAR {
  int Y, hasil;
public:
  void SetY(int YY) {
    Y = YY;
  }
  void KaliXY() {
    // Menggunakan nilai X dari kelas DASAR
    hasil = X * Y;
  }
  int GetHasil() {
    return hasil;
  }
};

// Fungsi utama
int main() {

  DASAR A;
  TURUNAN B;

  B.SetY(5);
  B.KaliXY();
  cout<<"\nHasil X kali Y: "<<B.GetHasil();

  return 0;
}
