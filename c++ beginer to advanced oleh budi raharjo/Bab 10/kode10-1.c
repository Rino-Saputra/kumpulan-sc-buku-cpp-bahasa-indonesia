/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

#include <stdio.h>

// Mendeklarasikan variabel-variabel global
int A, B, C;

// Membuat prototipe fungsi
void set_A(int AA);
int get_A();

void set_B(int BB);
int get_B();

void set_C(int CC);
int get_C();

// Mendefinisikan fungsi utama
int main(void) {

  // Melakukan pemanggilan fungsi
  set_A(10);
  set_B(20);
  set_C(30);

  // Menampilkan nilai
  printf("Nilai A: %d\n", A);
  printf("Nilai B: %d\n", B);
  printf("Nilai C: %d", C);

  return 0;
}

// Bagian implementasi dari fungsi 
// yang terdapat pada bagian prototipe
void set_A(int AA) {
  A = AA;
}

int get_A() {
  return A;
}

void set_B(int BB) {
  B = BB;
}

int get_B() {
  return B;
}

void set_C(int CC) {
  C = CC;
}

int get_C() {
  return C;
}
