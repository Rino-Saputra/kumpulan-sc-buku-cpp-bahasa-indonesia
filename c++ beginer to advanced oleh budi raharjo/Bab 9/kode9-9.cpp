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

  // Mendeklarasikan stream untuk proses input
  ifstream input;

  // Membuka file yang dibuat 
  // pada program di atas (Kode Program 9-8)
  input.open("D:/COBA.TXT");

  if (!input) {
     cout<<"File tidak dapat dibuka"<<endl;
     return 1;
  }
    
  char S[100];
    
  input>>S;
  cout<<S<<endl;
  input>>S;
  cout<<S<<endl;
  input>>S;
  cout<<S<<endl;

  // Menutup file    
  input.close();

  return 0;
}
