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
// untuk proses input array
void InputArray(int A[], int N) {
  for (int C=0; C<N; C++) {
    cout<<"Masukkan nilai A["<<C<<"]: "; 
    cin>>A[C];
  }
}

// Mendefinisikan fungsi 
// untuk menghitung jumlah (sum) 
// dari semua elemen array
long Jumlah(int A[], int N) {
  long jml = 0;
  // Menjumlahkan semua elemen array
  for (int C=0; C<N; C++) {
     jml += A[C];
  }
  return jml;
}

// Fungsi utama
int main() {
  int X[100];	// Elemen maksimal adalah 100
  int BanyakElemen;
  long HASIL;

  cout<<"Masukkan banyaknya elemen "
      <<"yang diinginkan: ";
  cin>>BanyakElemen;
  cout<<endl;

  // Memanggil fungsi InputArray
  InputArray(X, BanyakElemen);

  // Memanggil fungsi Jumlah() 
  // dan menampung hasilnya 
  // ke variabel HASIL
  HASIL = Jumlah(X, BanyakElemen);

  // Menampilkasn hasil
  cout<<"\nJumlah elemen array = "
      <<HASIL;

  return 0;
}
