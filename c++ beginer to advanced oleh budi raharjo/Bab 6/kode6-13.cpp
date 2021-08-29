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
#include <cstdlib>

using namespace std;

int main() {
  int *P;

  // Mengalokasikan memori sebesar 4 byte untuk tipe int
  P = (int *) malloc(sizeof(int));

  // Menggunakan ruang memori yang telah dialokasikan
  *P = 100;

  cout<<"Nilai *P: "<<*P;

  // Mendealokasikan memori
  free(P);

  return 0;
}
