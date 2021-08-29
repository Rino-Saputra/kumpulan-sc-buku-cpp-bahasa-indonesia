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

using namespace std;

int main() {

  char S[20];

  cout<<"Masukkan nama Anda: ";

  // Meminta input dari user
  cin.getline(S, sizeof(S) - 1);

  // Menampilkan nama yang telah dimasukkan
  cout<<"Hai "<<S<<", apa kabarmu?"<<endl;

  return 0;	
}
