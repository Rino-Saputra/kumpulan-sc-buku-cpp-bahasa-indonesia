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
#include <string>

using namespace std;

int main() {

  // mendeklarasikan string gaya C++
  string S;

  cout<<"Masukkan nama Anda: ";

  // Meminta input dari user
  getline(cin, S);

  // Menampilkan nama yang telah dimasukkan
  cout<<"Hai "<<S<<", apa kabarmu?"<<endl;

  return 0;	
}
