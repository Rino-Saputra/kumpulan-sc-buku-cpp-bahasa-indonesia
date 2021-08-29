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

class KESATU {
  int X, Y;
public:
  KESATU(int XX, int YY) {
     X = XX;
     Y = YY;
  }
  // Mendeklarasikan friend class
  friend class KEDUA;
};

// Definisi dari kelas KEDUA
class KEDUA {
  // …
public:
  int Kali(KESATU A);
  // …
};

int KEDUA::Kali(KESATU A) {
  // Mengakses data private 
  // pada kelas KESATU 
  return (A.X * A.Y);
};

int main() {

  // Melakukan instansiasi dari kelas KESATU
  KESATU O(40, 3);

  // Melakukan instansiasi dari kelas KEDUA
  KEDUA P;

  // Memanggil fungsi Kali() 
  // yang terdapat pada kelas KEDUA
  cout<<"Hasil kali: "<<P.Kali(O);

  return 0;
}
