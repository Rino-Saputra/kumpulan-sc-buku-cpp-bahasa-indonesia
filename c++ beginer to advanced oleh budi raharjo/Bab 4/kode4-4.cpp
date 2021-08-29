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
#include <iomanip>

using namespace std;

int main() {
  double X, Y, Z;

  // Meminta user untuk memasukkan bilangan
  cout<<"Masukkan bilangan yang akan dibagi : "; 
  cin>>X;
  cout<<"Masukkan bilangan pembagi          : "; 
  cin>>Y;

  // Menghindari terjadinya pembagian dengan 0
  if (Y == 0) {
    cout<<"Kesalahan: "
        <<"Bilangan pembagi tidak boleh NOL";
  } else {
    // Melakukan pembagian bilangan X dengan Y
    Z = X/Y;

    // Menentukan presisi dari hasil bagi 
    // dengan nilai dua angka 
    // di belakang koma
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);

    // Menampilkan hasil bagi
    cout<<"Hasil bagi = "<<Z;
  }

  return 0;
}
