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
#include <cstring>

using namespace std;

int main() {
  char* S1;
  char* S2;
  int panjang_S1, panjang_S2;

  // Melakukan pengisian nilai 
  // terhadap variabel S1 dan S2
  S1 = (char*) "Budi";
  S2 = (char*) "Raharjo";

  panjang_S1 = strlen(S1);
  panjang_S2 = strlen(S2);

  // Menampilkan nilai dari
  // variabel panjang_S1 dan panjang_S2
  cout<<"Panjang S1 : "<<panjang_S1<<endl;
  cout<<"Panjang S2 : "<<panjang_S2<<endl;

  return 0;
}
