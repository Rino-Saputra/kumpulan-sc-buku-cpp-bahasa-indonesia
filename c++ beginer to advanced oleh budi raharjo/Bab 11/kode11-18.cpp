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

class CONTOH{
  int X, Y;
public:
  void SetXY(int XX, int YY) {
    X = XX;
    Y = YY;
  }
  // Deklarasi friend function
  friend int KALI(CONTOH A);
};

// Mendefinisikan fungsi KALI() 
// yang bukan termasuk member function 
// dari kelas CONTOH
int KALI(CONTOH A) {
  // Mengakses bagian private 
  // secara langsung dari kelas CONTOH
  return (A.X * A.Y);
}

// Fungsi utama
int main() {

  // Melakukan instansiasi kelas CONTOH
  CONTOH O;

  // Mengisi nilai X=20 dan Y=3
  O.SetXY(20, 3);

  cout<<"Hasil kali: "<<KALI(O);

  return 0;
}
