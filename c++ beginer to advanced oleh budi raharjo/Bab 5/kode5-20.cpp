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
#include <cstdlib>

using namespace std;

enum BOOLEAN { FALSE, TRUE };

int main() {

  float X = 1, Y;

  while (TRUE) {
    cout<<"Masukkan nilai Y: "; cin>>Y;

    // Menghindari pembagian dengan NOL
    if (Y == 0) {
       cout<<"Nilai Y tidak boleh 0";
       exit(0);	// Keluar dari program
    }
    break;  // Keluar dari pengulangan
  }

  float Z = X / Y;
  cout<<X<<"/"<<Y<<" = "<<Z;

  return 0;
}
