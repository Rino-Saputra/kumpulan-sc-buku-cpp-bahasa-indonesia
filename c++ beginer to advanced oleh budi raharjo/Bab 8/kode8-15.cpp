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
// untuk menghitung volume balok
long VolumeBalok(int panjang, 
                 int lebar = 20, 
                 int tinggi = 5) {
  return (panjang * lebar * tinggi);
}

int main() {
  // Mendeklarasikan variabel p dengan nilai 50
  int p = 50;
  // Mendeklarasikan variabel l dengan nilai 10	
  int l = 10;
  // Mendeklarasikan variabel t dengan nilai 2	
  int t = 2;

  long hasil;

  // Memanggil fungsi dengan tiga parameter
  hasil = VolumeBalok(p, l, t);
  cout<<"Volume balok = "<<hasil<<endl;

  // Memanggil fungsi dengan dua parameter
  hasil = VolumeBalok(p, l);
  cout<<"Volume balok = "<<hasil<<endl;

  // Memanggil fungsi dengan satu parameter
  hasil = VolumeBalok(p);
  cout<<"Volume balok = "<<hasil;

  return 0;
}
