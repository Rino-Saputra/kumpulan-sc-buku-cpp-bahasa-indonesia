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

  char namadepan[15];
  char *namabelakang;

  strcpy(namadepan, "Bimo");
  namabelakang = (char *) "Haryo Hanggoro";

  cout<<"Nama lengkap: "<<namadepan
      <<" "
      <<namabelakang;

  return 0;
}
