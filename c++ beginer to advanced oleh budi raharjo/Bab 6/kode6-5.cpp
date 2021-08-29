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
  const int *P1;   // P1 akan menunjuk ke tipe data int 
                   // yang bersifat tetap

  int X, Y;

  X = 5;
  Y = 10;

  P1 = &X;

//  *P1 = 2;  // SALAH, karena nilai yang ditunjuk oleh P1 
              // (nilai *P1) bersifat tetap

  P1 = &Y;   // BENAR, 
             // karena pointer P1 tidak bersifat tetap

  return 0;
}
