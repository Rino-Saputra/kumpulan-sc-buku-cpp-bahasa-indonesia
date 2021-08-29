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

#define MAX 5

using namespace std;

int main() {
  float *P1;
  int *P2;

  P1 = new float; // Mengalokasikan satu ruang memori 
                  // dan disimpan ke pointer P1
  *P1 = 3.14; // Mengisikan nilai ke dalam ruang 
              // yang telah dialokasikan

  // Menampilkan nilai dan alamat yang disimpan 
  // dalam pointer P1
  cout<<"Nilai *P1	: "<<*P1<<endl;
  cout<<"Nilai P1	: "<<P1<<endl;
  cout<<'\n';

  // Mengalokasikan 5 buah ruang memori dan disimpan 
  // ke pointer P2
  P2 = new int[MAX];

  // Mengisikan nilai ke dalam ruang-ruang memori 
  // yang telah dialokasikan
  for (int C=0; C<5; C++) {
     *P2 = (C+1) * 10;
     P2 += 1;
  }

  // Mengembalikan pointer P2 agar menunjuk ke alamat 
  // dari elemen ke-0
  P2 -= 5;

  // Menampilkan nilai dan alamat yang disimpan 
  // dalam pointer P2
  for (int c=0; c<5; c++) {
      cout<<"Nilai *P2 ke-"<<c<<"   : "<<*P2<<endl;
      cout<<"Nilai P2 ke-"<<c<<"    : "<<P2<<endl<<endl;
      P2 += 1;
  }

  return 0;
}
