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
  int X = 25;	// Mendeklarasikan variabel X 
                // dengan nilai default 25
  int *P1;	     // Mendeklarasikan pointer P1 
                // yang akan menunjuk ke tipe data int
  int **P2;	// Mendeklarasikan pointer P2 
                // yang akan menunjuk ke pointer P1	

  P1 = &X;	

  P2 = &P1;

  // Menampilkan nilai
  cout<<"Nilai X		: "<<X<<endl;
  cout<<"Nilai *P1	: "<<*P1<<endl;
  cout<<"Nilai *P2	: "<<*P2<<endl;
  cout<<"Nilai **P2	: "<<**P2<<endl;
  cout<<endl;

  // Menampilkan alamat
  cout<<"Nilai &X	: "<<&X<<endl;
  cout<<"Nilai P1	: "<<P1<<endl;
  cout<<"Nilai P2	: "<<P2<<endl;

  return 0;
}
