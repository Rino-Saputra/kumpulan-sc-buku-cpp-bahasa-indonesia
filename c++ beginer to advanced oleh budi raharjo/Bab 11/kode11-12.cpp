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
  static int X;
public:
  static void Inisialisasi(int XX) {
    X = XX;
  }
  void ShowX() {
    cout<<"Nilai X: "<<X<<endl;
  }
};

// Mendefinisikan X
int CONTOH::X;

// Fungsi utama
int main() {

  // Memanggil fungsi Inisialisasi()
  // sebelum sebuah objek/instance dibuat
  CONTOH::Inisialisasi(25);

  // Melakukan instansiasi 
  // terhadap kelas CONTOH 
  // dengan nama instance A
  CONTOH A;

  // Memanggil fungsi ShowX() 
  // milik kelas CONTOH
  A.ShowX();

  return 0;
}
