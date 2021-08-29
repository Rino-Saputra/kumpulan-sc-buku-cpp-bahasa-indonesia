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
#include <cerrno>	// errno
#include <cstdlib>	// exit()
#include <cstdio>	// fopen(), fclose()

using namespace std;

int main() {

  FILE *fp;
  
  // Membuka file untuk dibaca
  fp = fopen("coba.txt", "r");
  
  if (fp == NULL) {
    cout<<"Kode error: "<<errno<<endl;
    cout<<"Pesan error: "<<strerror(errno);
    exit(EXIT_FAILURE);
  }
  
  // Membaca isi file
  char c;
  while (c = getc(fp) != EOF) {
  	cout<<c;
  }
  
  // Menutup file
  fclose(fp);
  
  return 0;
}
