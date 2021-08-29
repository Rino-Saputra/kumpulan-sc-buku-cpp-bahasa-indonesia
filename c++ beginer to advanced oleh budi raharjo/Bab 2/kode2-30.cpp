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
  char* S = (char*) "Pemrograman C++";
  char* PStr;

  // Melakukan pencarian karakter '+' di dalam variabel S
  PStr = strchr(S, 'C');

  // Menampilkan nilai dari variabel PStr
  cout<< PStr<<endl;

  return 0;
}
