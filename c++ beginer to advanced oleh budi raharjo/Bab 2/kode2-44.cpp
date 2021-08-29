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

int main () {

  char str1[] = "Pemrograman C++0x";
  char str2[] = "1234567890";

  int indeks = strcspn(str1, str2);
  
  cout<<"Angka pertama dalam str1 "
      <<"ditemukan pada indeks ke-"
      <<indeks;
  
  return 0;
}
