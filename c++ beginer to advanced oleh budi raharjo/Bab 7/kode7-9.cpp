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

  // Mendeklarasikan array 
  // yang bersifat konstan
  const int A[5] = { 10, 20, 30, 40, 50 };

  // Menampilkan nilai 
  // yang terdapat pada array A
  for (int C=0; C<5; C++) {
    cout<<"A["<<C<<"] = "<<A[C]<<endl;
  }

  return 0;
}
