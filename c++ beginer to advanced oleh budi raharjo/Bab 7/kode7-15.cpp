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

  // Mendeklarasikan array dari pointer
  int *P[5];

  for (int C=0; C<5; C++) {
    // Memesan alamat/ruang memori
    P[C] = new int;

    // di sini P[C] siap digunakan 
    // untuk mengakses alamat memori 
    // yang telah dipesan
    *P[C] = (C+1) * 100;

    cout<< "Alamat ke-"<<C+1<< ": "
        <<P[C]<< '\t';
    cout<<"Nilai: "<<*P[C]
        <<endl;
    
  }
  cout<<endl;

  // Membebaskan kembali memori
  // yang telah dipesan
  for (int C=4; C>=0; C--) {
    cout<<"Membebaskan alamat memori ke-"
        <<C+1<<"..."
        <<endl;
    delete P[C];
  }

  return 0;
}
