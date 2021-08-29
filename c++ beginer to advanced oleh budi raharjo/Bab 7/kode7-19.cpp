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

  // Melakukan inisialisasi nilai 
  // ke dalam elemen-elemen array dua dimensi
  int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

  // Menampilkan nilai yang tersimpan 
  // dalam elemen array
  for (int j=0; j<3; j++) {
    for (int k=0; k<3; k++) {
      cout<<"A["<<j<<"]["<<k<<"] = "
          <<A[j][k]<<endl;
    }
    cout<<endl;
  }

  return 0;
}
