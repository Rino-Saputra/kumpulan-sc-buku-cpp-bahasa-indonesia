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

  // Mendeklarasikan variabel NAMA dengan tipe char dan 
  // lebar 5 karakter
  char NAMA[5];

  // Mengisikan nilai ke dalam variabel NAMA
  strcpy(NAMA, "BIMO");

  cout<<"Karakter ke-0: "<<NAMA[0]<<endl;
  cout<<"Karakter ke-1: "<<NAMA[1]<<endl;
  cout<<"Karakter ke-2: "<<NAMA[2]<<endl;
  cout<<"Karakter ke-3: "<<NAMA[3]<<endl;
  cout<<"Karakter ke-4: "<<NAMA[4]<<endl;

  return 0;
}
