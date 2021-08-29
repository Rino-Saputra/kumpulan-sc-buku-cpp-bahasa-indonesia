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
  int J = 10;
  int K;

  while (J >= 1) {
    K = 1;
    while (K <= J) {
      cout<<K*J<<' ';
      K++;
    }
    cout<<'\n';
    J--;	      
  }

  return 0;
}
