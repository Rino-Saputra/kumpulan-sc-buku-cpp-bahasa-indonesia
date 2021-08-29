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

// Membuat kelas dengan nama CONTOH
class CONTOH {
  int X;
public:
  // Membuat constructor tanpa parameter
  CONTOH() {
     // Melakukan inisialisasi nilai X 
     // dengan nilai 10
     X = 10;
  }

  // Membuat constructor 
  // dengan menggunakan satu parameter
  CONTOH(int XX) {
     X = XX;
  }

  // Membuat member function
  void ShowX() {
    cout<<"Nilai X : "<<X<<endl;
  }
  //...
};

int main() {
	
  // Melakukan instansiasi terhadap kelas CONTOH 
  // dengan nama instance O
  CONTOH O;

  // Melakukan instansiasi terhadap kelas CONTOH 
  // dengan nama instance P
  CONTOH P(200);

  // Memanggil fungsi ShowX()
  O.ShowX();
  P.ShowX();

  return 0;
}
