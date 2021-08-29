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

  ifstream input;

  input.open("D:/TEST.TXT");

  if (!input) {
    cout<<"File tidak dapat dibuka"<<endl;
    return 1;
  }

  char C;
  while (input) { // Selama belum EOF (End Of File)
    input.get(C);
    if (input) {
      cout<<C;
    }
  }

  input.close();

  return 0;
}
