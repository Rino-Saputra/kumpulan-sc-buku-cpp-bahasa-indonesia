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
  char* S = (char*) "Ini adalah contoh string";
  char* substring = (char*) "contoh";
  char* PStr;

  // Melakukan pencarian substring "contoh"
  // di dalam varaibel S
  PStr = strstr(S, substring);

  // Menampilkan nilai dari variabel PStr
  cout<<"S: "<<S<<endl;
  cout<<"PStr: "<<PStr<<endl;
  cout<<"Substring \""<<substring
      <<"\" ditemukan pada indeks ke-"
      <<PStr-S;

  return 0;
}
