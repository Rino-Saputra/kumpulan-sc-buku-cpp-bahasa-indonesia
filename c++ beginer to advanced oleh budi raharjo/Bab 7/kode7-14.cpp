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

int main() {

  // Mendeklarasikan struktur 
  // yang data anggotanya bertipe array
  struct STRUKTUR {
     int A[3];
     int B[3];	
  };

  // Mendeklarasikan variabel X 
  // yang bertipe STRUKTUR
  STRUKTUR X;

  int C;

  // Memasukkan nilai ke dalam variabel X
  for (C=0; C<3; C++) {
     X.A[C] = C+1;
     X.B[C] = (C+1) * 100;
  }

  // Menampilkan nilai yang 
  // telah dimasukkan ke dalam variabel X
  for (C=0; C<3; C++) {
    cout<<"X.A["<<C<<"] = "<<X.A[C]<<endl;
    cout<<"X.B["<<C<<"] = "<<X.B[C]<<endl;
    cout<<'\n';
  }

  return 0;
}
