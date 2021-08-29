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
  char S1[50];
  char* S2;

  // Melakukan pengisian nilai
  // terhadap variabel S1 dan S2
  strcpy(S1, "Nama saya adalah ");
  S2 = (char*) "Budi Raharjo";

  // Menggabungkan 4 karakter 
  // dari variabel S2 ke variabel S1
  strncat(S1, S2, 4);

  // Menampilkan nilai dari variabel S1 
  // setelah dilakukan penggabungan
  cout<<S1<<endl;

  return 0;
}
