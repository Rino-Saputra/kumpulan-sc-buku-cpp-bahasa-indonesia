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

  long *P;
  long X;

  P = &X;

  X = 10;	// Mengisikan nilai 10 ke dalam variabel X

  cout<<"Nilai X 	: "<<X<<endl;
  cout<<"Nilai *P 	: "<<*P<<endl;
  cout<<"Nilai P 	: "<<P<<endl;
  cout<<"Nilai &X 	: "<<&X<<endl;
	
  *P = 200;	// Mengisikan nilai 200 ke dalam *P

  cout<<"Nilai X 	: "<<X<<endl;
  cout<<"Nilai *P 	: "<<*P<<endl;
  cout<<"Nilai P 	: "<<P<<endl;
  cout<<"Nilai &X 	: "<<&X<<endl;

  return 0;
}
