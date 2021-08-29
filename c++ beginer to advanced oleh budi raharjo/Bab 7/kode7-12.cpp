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

  // Mendeklarasikan array A dari tipe karakter
  char A[4] = { 'C','+','+','\0' };

  // Mendeklarasikan B sebagai string
  char B[4] = "C++";

  // Menampilkan nilai dari elemen array A
  for (int C=0; C<4; C++) {
     cout<<A[C];
  }

  cout<<endl;

  // Menampilkan nilai dari variabel B
  cout<<B;

  cout<<"\n\n";

  // Menampilkan ukuran dari A dan B
  cout<<"Ukuran A: "<<sizeof(A)<<endl;
  cout<<"Ukuran B: "<<sizeof(B);

  return 0;
}
