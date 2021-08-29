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
	
  int X = 50; // Mendeklarasikan variabel X 
              // dengan nilai default 50

  // Membuat alias dari variabel X 
  // dengan nama AliasX
  int& AliasX = X;

  // Menampilkan nilai yang disimpan 
  // dalam variabel X dan AliasX
  cout<<"Nilai X	: "<<X<<endl;
  cout<<"Nilai AliasX	: "<<AliasX<<endl;
  cout<<endl;

  // Menampilkan alamat dari variabel X dan AliasX
  cout<<"Alamat X	: "<<&X<<endl;
  cout<<"Alamat AliasX	: "<<&AliasX<<endl;

  return 0;
}
