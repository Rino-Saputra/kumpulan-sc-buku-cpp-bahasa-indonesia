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
  int X;		// X bersifat private
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

  CONTOH O;
  O.SetX(100);
  O.ShowX();

  return 0;
}
