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

  int C;	// Mendeklarasikan variabel C 
           // sebagai indeks pengulangan

  // Mendefinisikan tipe data bertipe struktur
  typedef struct {
    long NIM;
    char Nama[25];
    char Kota[30];
  } SISWA;

  // Mendeklarasikan array A dengan tipe SISWA 
  // dan jumlah elemennya tiga
  SISWA A[3];

  // Mengisikan nilai pada elemen array
  for (C=0; C<3; C++) {
    cout<<"NIM	: "; cin>>A[C].NIM;
    cout<<"Nama	: "; cin>>A[C].Nama;
    cout<<"Kota	: "; cin>>A[C].Kota;
    cout<<'\n';
  }

  // Menampilkan nilai yang telah dimasukkan 
  // ke dalam elemen array
  for (C=0; C<3; C++) {
    cout<<A[C].NIM<<endl;
    cout<<A[C].Nama<<endl;
    cout<<A[C].Kota<<endl;
    cout<<'\n';
  }

  return 0;
}
