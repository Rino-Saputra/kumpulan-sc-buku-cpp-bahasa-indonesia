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

// Mendefinisikan fungsi Tulis()
// dengan satu parameter
// yang bertipe int
void Tulis(int X) {
  cout<<X<<endl;
}

// Mendefinisikan fungsi Tulis()
// dengan dua parameter 
// dan bertipe char*
void Tulis(char* S1, char* S2) {
  cout<<S1<<" "<<S2<<endl;
}

// Fungsi utama
int main() {

  // Melakukan pemanggilan fungsi Tulis()
  Tulis(100);
  Tulis((char*) "Penerbit", 
        (char*) "INFORMATIKA");

  return 0;
}
