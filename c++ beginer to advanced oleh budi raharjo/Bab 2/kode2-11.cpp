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

// Membuat fungsi dengan nama contoh
int contoh() {
  static int A = 0;	// Mendeklarasikan variabel statis
  A = A + 10;
  return A;
}

int main() {
  int x, y, z;	// Mendeklarasikan variabel x, y, dan z
  x = contoh();	// Memanggil fungsi contoh() 
                // untuk yang pertama kali
  y = contoh();	// Memanggil fungsi contoh() 
                // untuk yang kedua kali
  z = contoh();	// Memanggil fungsi contoh() 
                // untuk yang ketiga kali
	
  // Menampilkan nilai
  // yang telah diproses di dalam fungsi
  cout<<"Nilai pada pemanggilan pertama : "<<x<<endl;
  cout<<"Nilai pada pemanggilan kedua   : "<<y<<endl;
  cout<<"Nilai pada pemanggilan ketiga  : "<<z<<endl;

  return 0;
}
