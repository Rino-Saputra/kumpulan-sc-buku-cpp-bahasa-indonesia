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
  char S1[50];
  char* S2;

  // Melakukan pengisian nilai terhadap variabel S2
  S2 = (char*) "Ini adalah contoh penyalinan string";

  // Melakukan penyalinan string
  // dari variabel S2 ke variabel S1
  strcpy(S1, S2);

  // Menampilkan nilai dari variabel S1
  cout<<S1<<endl;

  return 0;
}
