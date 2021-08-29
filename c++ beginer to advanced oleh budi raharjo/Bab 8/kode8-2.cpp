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

// Membuat fungsi sederhana 
// yang mengembalikan tipe string
char* TestFungsiString() {
  return (char*) "Ini adalah nilai dari fungsi";
}

// Fungsi utama
int main() {
  // Memanggil dan menampilkan hasil fungsi
  cout<<TestFungsiString();
	
  return 0;
}
