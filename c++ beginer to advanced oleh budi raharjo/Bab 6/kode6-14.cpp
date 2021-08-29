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
	
  int X;	// Mendeklarasikan variabel X

  // Membuat alias dari variabel X 
  // dengan nama AliasX
  int& AliasX = X;

  // Mengisikan nilai ke dalam variabel X
  X = 12;

  // Menampilkan nilai 
  // yang disimpan dalam variabel X dan AliasX
  cout<<"Nilai X	: "<<X<<endl;
  cout<<"Nilai AliasX	: "<<AliasX<<endl;
  cout<<endl;

  // Mengisikan nilai ke dalam AliasX
  AliasX = 35;

  // Menampilkan kembali nilai yang disimpan 
  // dalam variabel X dan AliasX
  cout<<"Nilai X	: "<<X<<endl;
  cout<<"Nilai AliasX	: "<<AliasX<<endl;

  return 0;
}
