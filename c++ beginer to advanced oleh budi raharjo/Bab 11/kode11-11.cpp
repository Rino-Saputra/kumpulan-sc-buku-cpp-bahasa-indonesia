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
  static int X;		// variabel statis
  int Y;			// variabel non-statis
public:
  // Constructor kelas CONTOH
  CONTOH(int XX, int YY) {
     X = XX;
     Y = YY;
  }
  // Fungsi untuk menampilkan nilai X dan Y
  void ShowXY() {
     cout<<"Nilai X: "<<X<<endl;
     cout<<"Nilai Y: "<<Y<<endl;
     cout<<endl;
  }
};

// Mendeklarasikan ulang variabel X
// di luar kelas
int CONTOH::X;

// Fungsi utama
int main() {

  // Membuat objek A 
  // dengan X=10 dan Y=10
  CONTOH A(10, 10);

  // Menampilkan nilai X dan Y 
  // dari objek A
  cout<<"Di dalam objek A"<<endl;

  A.ShowXY();

  // Membuat objek B 
  // dengan X=50 dan Y=50
  CONTOH B(50, 50);

  // Menampilkan nilai X dan Y 
  // dari objek B
  cout<<"Di dalam objek B"<<endl;

  B.ShowXY();

  // Menampilkan kembali nilai X dan Y 
  // dari objek A
  cout<<"Di dalam objek A"<<endl;

  A.ShowXY();

  return 0;
}
