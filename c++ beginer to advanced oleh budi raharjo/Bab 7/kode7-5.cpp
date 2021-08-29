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

  // Mendeklarasikan variabel 
  // untuk menampung kata yang akan diperiksa
  char S[6] = "KATAK";

  // Mendeklarasikan variabel boolean
  // dengan inisialisasi true
  bool palindrom = true;

  // Variabel n diisi dengan panjang string
  int n = strlen(S);

  // Memeriksa palindrom atau bukan
  for(int i=0; i<n; i++){
    if(S[i] != S[n-i-1]){
      palindrom = false;
      break; 
    }
  }

  // Menampilkan hasil pemeriksaan
  if (!palindrom) {
    cout<<S<<" bukan palindrom";
  } else {
    cout<<S<<" merupakan palindrom";
  }

  return 0;
}
