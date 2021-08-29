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

// Membuat kelas dengan nama KELAS1
class KELAS1 {
  int A;
public:
  void set_A(int AA);
  int get_A();
  void show_A();
};

// Membuat kelas dengan nama KELAS2
class KELAS2 {
  int B;
public:
  void set_B(int BB);
  int get_B();
  void show_B();
};

// Membuat kelas dengan nama KELAS3
class KELAS3 {
  int C;
public:
  void set_C(int CC);
  int get_C();
  void show_C();
};


// Implementasi dari fungsi
// yang terdapat pada KELAS1
void KELAS1::set_A(int AA) {
  A = AA;
}

int KELAS1::get_A() {
  return A;
}

void KELAS1::show_A() {
  cout<<"Nilai A : "<<A<<endl;
}

// Implementasi dari fungsi
// yang terdapat pada KELAS3
void KELAS2::set_B(int BB) {
  B = BB;
}

int KELAS2::get_B() {
  return B;
}

void KELAS2::show_B() {
  cout<<"Nilai B : "<<B<<endl;
}

// Implementasi dari fungsi
// yang terdapat pada KELAS3
void KELAS3::set_C(int CC) {
  C = CC;
}

int KELAS3::get_C() {
  return C;
}

void KELAS3::show_C() {
  cout<<"Nilai C : "<<C<<endl;
}


// Mendefinisikan fungsi utama
int main() {

  // Mendeklarasikan objek OB1, OB2, dan OB3
  KELAS1 OB1;	// OB1 bertipe KELAS1
  KELAS2 OB2;	// OB2 bertipe KELAS2
  KELAS3 OB3;	// OB3 bertipe KELAS3

  // Melakukan pengisian nilai
  OB1.set_A(10);
  OB2.set_B(20);
  OB3.set_C(30);

  // Menampilkan nilai
  OB1.show_A();
  OB2.show_B();
  OB3.show_C();

  return 0;
}
