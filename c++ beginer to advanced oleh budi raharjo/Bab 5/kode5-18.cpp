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

enum BOOLEAN { FALSE, TRUE };

int main() {
  int C = 0;

  while (TRUE) {
    cout<<C+1<<endl;
    if (C == 9) {
       goto MyLabel;	// Meloncat ke label MyLabel
    }
    C++;
  }

  MyLabel:	// Lokasi yang akan dituju

  return 0;
}
