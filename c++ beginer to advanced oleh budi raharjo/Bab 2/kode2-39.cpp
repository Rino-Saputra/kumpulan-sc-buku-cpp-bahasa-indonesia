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
  char *pch;
  char str[] = "Contoh string";
  // melakukan pencarian karakter 'r'
  pch = (char*) memchr(str, 'r', strlen(str));
  
  cout<<"str: "<<str<<endl;
  cout<<"pch: "<<pch<<endl;
  
  if (pch!=NULL) {
    cout<<"'r' ditemukan pada indeks ke-"
	    <<pch-str;
  } else {
    cout<<"'r' tidak ditemukan";
  }
  
  return 0;
}
