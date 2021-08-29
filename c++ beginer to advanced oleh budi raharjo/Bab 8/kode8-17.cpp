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
void Tulis(char* S) {
  cout<<S<<endl;
}

// Mendefinisikan fungsi Tulis()
// dengan dua parameter
void Tulis(char* S1, char* S2) {
  cout<<S1<<" "<<S2<<endl;
}

// Mendefinisikan fungsi Tulis()
// dengan tiga parameter
void Tulis(char* S1, char* S2, char* S3) {
  cout<<S1<<" "<<S2<<" "<<S3<<endl;
}

// Fungsi utama
int main() {

  // Melakukan pemanggilan fungsi Tulis()
  Tulis((char*) "Budi Raharjo");
  Tulis((char*) "Penerbit", 
        (char*) "INFORMATIKA");
  Tulis((char*) "Menjadi", 
        (char*) "Master", 
        (char*) "C++");

  return 0;
}
