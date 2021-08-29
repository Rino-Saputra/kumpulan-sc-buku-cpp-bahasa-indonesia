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

  int A[5] = {100,200,300,400,500};
  int *P = A;

  for (int C=0; C<5; C++) {
    cout<<"A["<<C<<"]: "<<*P<<'\t'
        <<"Alamat: "<<P
        <<endl;
    P++;	// Melakukan increment pada pointer
  }
 
  return 0;
}
