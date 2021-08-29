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
  char S1[50] = "CONTOH";
  char* S2 = (char *) "salin string";

  // Melakukan penyalinan string
  // dari variabel S2 ke variabel S1
  strncpy(S1, S2, 4);

  // Menampilkan nilai dari variabel S1
  cout<<S1<<endl;

  return 0;
}
