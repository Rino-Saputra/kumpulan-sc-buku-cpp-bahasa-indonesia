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
  char* S = (char*) "contoh membesarkan huruf";

  // Menampilkan string S
  // menjadi huruf besar
  for (int i=0; i<strlen(S); i++) {
    cout<<(char) toupper((char) S[i]);
  }

  return 0;
}
