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
#include <cstring>

using namespace std;

struct SISWA {
  char nama[25];
  int usia;
};

int main () {
  SISWA siswa, salinan_siswa;
  
  // Menggunakan memcpy() untuk menyalin string
  memcpy(siswa.nama, "Bayu Nugroho", 13);
  siswa.usia = 19;

  // Menggunakan memcpy() untuk menyalin struktur
  memcpy(&salinan_siswa, &siswa, sizeof(siswa));

  // Menampilkan data salinan_siswa
  cout<<"SALINAN DATA SISWA"<<endl;
  cout<<"Nama: "<<salinan_siswa.nama<<endl;
  cout<<"Usia: "<<salinan_siswa.usia;

  return 0;
}
