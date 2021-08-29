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

// Mendeklarasikan tipe baru yang hanya memiliki 
// nilai FALSE dan TRUE
enum BOOLEAN { FALSE, TRUE };

int main() {
  // Mendeklarasikan variabel sebagai indeks pengulangan 
  // dan diisi dengan nilai 0
  int C = 0;

  while (TRUE) {
    cout<<"Contoh pengulangan dalam C++"<<endl;
    if (C == 9) break;
    C++;
  }
  cout<<"Nilai C = "<<C;	

  return 0;
}
