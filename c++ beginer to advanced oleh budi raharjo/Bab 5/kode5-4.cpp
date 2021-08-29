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

int main() {
  cout<<"PENGULANGAN MENAIK"<<endl;
  for (int C=0; C<10; C++) {
    cout<<C+1<<endl;
  }

  // Membuat spasi vertikal
  cout<<'\n';	// dapat ditulis cout<<endl;
  cout<<"PENGULANGAN MENURUN"<<endl;
  for (int J=10; J>0; J--) {
    cout<<J<<endl;
  }

  return 0;
}
