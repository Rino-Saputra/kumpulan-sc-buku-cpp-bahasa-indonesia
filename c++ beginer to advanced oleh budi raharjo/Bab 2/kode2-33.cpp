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
  char* S = (char*) "CONTOH MENGECILKAN HURUF";

  // Menampilkan string S
  // menjadi huruf kecil
  for (int i=0; i<strlen(S); i++) {
	cout<<(char) tolower((char) S[i]);
  }

  return 0;
}
