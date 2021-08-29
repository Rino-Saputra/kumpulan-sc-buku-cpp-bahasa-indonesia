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
  int X=5, Y=10;

  /* P3 akan menunjuk ke alamat yang tetap, 
     yaitu alamat X 
     dan nilai yang ditunjuk juga tetap */
  const int * const P3 = &X;


//  *P3 = 2;  // SALAH, 
              // karena nilai *P3 tidak dapat diubah

//  P3 = &Y;  // SALAH, 
              // karena pointer P3 bersifat tetap

  return 0;
}
