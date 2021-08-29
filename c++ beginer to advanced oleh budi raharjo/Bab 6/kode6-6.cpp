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

  // P2 akan menunjuk ke alamat yang tetap,
  // yaitu alamat X
  int * const P2 = &X;  
                        
  *P2 = 2;   // BENAR, 
             // karena nilai *P2 dapat diubah

//  P2 = &Y; // SALAH, 
             // karena pointer P2 bersifat tetap

  return 0;
}
