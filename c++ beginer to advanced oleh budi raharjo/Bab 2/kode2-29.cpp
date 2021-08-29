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
  char* S = (char*) "Master C++";

  // Melakukan penulisan string mulai dari 
  // posisi akhir variabel S
  for (int i=strlen(S)-1; i>=0; i--) {
    // Menampilkan karakter S[i]
    cout<<S[i];
  }

  return 0;
}
