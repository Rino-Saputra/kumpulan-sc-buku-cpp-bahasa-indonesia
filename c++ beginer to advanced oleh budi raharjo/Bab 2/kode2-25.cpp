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
  char* spasi = (char*) " ";

  // Melakukan pengisian nilai 
  // terhadap variabel S1 dan S2
  strcpy(S1, "Teks");
  S2 = (char*) "Gabungan";

  // Menambahkan karakter spasi (' ')
  // ke dalam variabel S1
  strcat(S1, spasi);

  // Melakukan penggabungan string yang terdapat 
  // pada variabel S1 dan S2
  strcat(S1, S2);

  // Menampilkan nilai dari variabel S1 
  // setelah proses penggabungan
  cout<<S1<<endl;

  return 0;
}
