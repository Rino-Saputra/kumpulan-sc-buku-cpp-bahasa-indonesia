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
  // Mendeklarasikan array 
  // dan langsung menginisialisasi nilainya
  int A[5] = { 10, 20, 30, 40, 50 };

  // Menampilkan nilai 
  // yang terdapat pada elemen array
  cout<<"Sebelum dilakukan perubahan nilai"<<endl;
  cout<<"A[0] = "<<A[0]<<endl;
  cout<<"A[1] = "<<A[1]<<endl;
  cout<<"A[2] = "<<A[2]<<endl;
  cout<<"A[3] = "<<A[3]<<endl;
  cout<<"A[4] = "<<A[4]<<endl;

  // Mengubah elemen ke-1 dan ke-2
  A[0] = 12;
  A[1] = 25;

  // Menampilkan kembali nilai 
  // yang terdapat pada elemen array
  cout<<"Setelah dilakukan perubahan nilai"<<endl;
  cout<<"A[0] = "<<A[0]<<endl;
  cout<<"A[1] = "<<A[1]<<endl;
  cout<<"A[2] = "<<A[2]<<endl;
  cout<<"A[3] = "<<A[3]<<endl;
  cout<<"A[4] = "<<A[4]<<endl;
  
  return 0;
}
