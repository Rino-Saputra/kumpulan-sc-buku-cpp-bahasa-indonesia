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

// Mendefinisikan fungsi 
// untuk mengembalikan string 
// dari karakter yang dicari
char *CariKarakter(char K, char *S) {
  // Selama K tidak sama dengan *S 
  // dan *S masih ada
  while ((K != *S) && (*S)) {
     S++;	// Cari di alamat berikutnya
  }
  return S;
}

// Fungsi utama
int main() {
  // Pointer untuk menampung 
  // nilai kembalian fungsi
  char *P;

  char* STRING = (char*) "Mejadi Master C++";
  char Karakter = 'C';

  // Memanggil fungsi CariKarakter()
  P = CariKarakter(Karakter, STRING);

  if (*P) {	// Jika ditemukan
      cout<<"Karakter "<<Karakter
          <<" ditemukan pada \""<<P<<"\"";
  } else {		// Jika tidak ditemukan
      cout<<"Karakter "<<Karakter
          <<" tidak ditemukan";
  }

  return 0;
}
