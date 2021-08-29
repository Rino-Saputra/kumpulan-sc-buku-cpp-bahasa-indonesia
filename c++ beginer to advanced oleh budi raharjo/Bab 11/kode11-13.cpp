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

// Membuat kelas
class CONTOH {
  int X;
public:
  void SetX(int XX) {
    X = XX;
  }
  void ShowX() {
    cout<<"Nilai X: "<<X<<endl;
  }
};

// Fungsi utama
int main() {

  // Mendeklarasikan pointer 
  // yang menunjuk ke kelas CONTOH
  CONTOH *P;

  // Mengalokasikan memori untuk objek
  // dari kelas CONTOH
  P = new CONTOH;	// P menunjuk ke alamat 
                      // yang baru dialokasikan

  // Memanggil fungsi-fungsi milik kelas CONTOH, 
  // yaitu dengan operator ->
  P->SetX(100);	  // Ingat, bukan menggunakan titik, 
                  // karena P adalah pointer
  P->ShowX();

  // Mendealokasikan memori
  delete P;

  return 0;
}
