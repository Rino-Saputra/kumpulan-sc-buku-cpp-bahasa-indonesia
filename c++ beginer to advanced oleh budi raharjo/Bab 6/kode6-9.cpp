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
  // Mendeklarasikan array dari tipe int sebanyak 5 elemen
  int A[5] = { 100, 200, 300, 400, 500 };	

  // Mendeklarasikan pointer P yang menunjuk ke tipe data int
  int *P;

  // Memerintahkan pointer P 
  // untuk menunjuk elemen array pertama 
  // (elemen ke-0)
  P = &A[0];
 
  // Menampilkan nilai yang alamatnya ditunjuk 
  // oleh pointer P
  cout<<"Nilai *P : "<<*P<<endl;

  // Melakukan operasi aritmetika (penjumlahan) 
  // terhadap pointer P
  P = P+2;

  // Menampilkan kembali nilai yang alamatnya 
  // ditunjuk oleh pointer P
  cout<<"Nilai *P : "<<*P<<endl;

  // Melakukan operasi aritmetika (pengurangan) 
  // terhadap pointer P
  P = P-1;

  // Menampilkan kembali nilai yang alamatnya
  // ditunjuk oleh pointer P
  cout<<"Nilai *P : "<<*P<<endl;

  // Melakukan operasi aritmetika (perkalian) 
  // terhadap pointer P
  // P = P*4;	// SALAH, 
                // hal ini tidak diizinkan oleh compiler

  // Melakukan operasi aritmetika (pembagian) 
  // terhadap pointer P
  // P = P / 2;	// SALAH, 
                // hal ini tidak diizinkan oleh compiler	

  return 0;
}
