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

  // Mendeklarasikan varaibel X 
  // dengan nilai default 5	
  int X = 5; 

  // Mendeklarasikan referensi konstan
  const int& AliasX = X;

  // Menampilkan nilai dari AliasX dan variabel X
  cout<<"Nilai X	: "<<X<<endl;
  cout<<"Nilai AliasX	: "<<AliasX<<endl<<endl;

  // Mengubah nilai X
  X = 12;	// BENAR, hal ini diperbolehkan karena X 
           // tidak bersifat konstan

  // Menampilkan kembali nilai 
  // dari AliasX dan variabel X
  cout<<"Nilai X	: "<<X<<endl;
  cout<<"Nilai AliasX	: "<<AliasX<<endl<<endl;

  // Mengubah nilai AliasX
  // AliasX = 25; // SALAH, hal ini tidak diizinkan 
                  // oleh compiler

  return 0;
}
