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
#include <fstream>

using namespace std;

int main() {

  // Mendeklarasikan stream 
  // untuk proses output
  ofstream output;

  output.open("D:/COBA.TXT");

  // Melakukan pencegahan 
  // terhadap terjadinya error
  if (!output) {
     cout<<"File tidak dapat dibuka"<<endl;
     return 1;
  }

  // Menuliskan teks ke dalam file
  output<<"Menjadi Master C++"<<endl;
  output<<"Oleh: Budi Raharjo"<<endl;
  output<<"Penerbit INFORMATIKA Bandung"<<endl;

  // Menutup file
  output.close();

  return 0;
}
