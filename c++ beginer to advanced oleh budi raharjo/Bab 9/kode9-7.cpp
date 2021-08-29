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
#include <iomanip>

using namespace std;

int main() {

  // Menggunakan flag setfill, setw dan endl
  cout<<setfill('*')<<setw(8)<<12<<endl;

  // Menggunakan flag oct dan endl
  cout<<oct<<64<<endl;

  // Menggunakan flag hex
  cout<<hex<<16<<endl;

  return 0;
}
