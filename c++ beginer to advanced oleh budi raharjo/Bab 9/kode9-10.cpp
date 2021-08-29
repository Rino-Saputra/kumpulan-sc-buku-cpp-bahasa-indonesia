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

  ofstream output;

  output.open("D:/TEST.TXT");

  if (!output) {
    cout<<"File tidak dapat dibuka"<<endl;
    return 1;
  }

  int C=65;
  while  (char(C) <= 'Z') {
    output.put(char(C));
    C++;
  }

  output.close();

  return 0;
}
