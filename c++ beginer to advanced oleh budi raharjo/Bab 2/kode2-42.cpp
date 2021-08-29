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
  char str1[] = "Belajar Pemrograman C++.....";
  char str2[] = "Python";
  
  memmove(str1+20,str2,strlen(str2));
  
  cout<<str1;
  
  return 0;
}
