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
  for (int j=1; j<=10; j++) {
    for (int k=1; k<=j; k++) {
      cout<<k*j<<' ';
    }
    cout<<'\n';
  }

  return 0;
}
