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
#include <fstream>
#include <cstring>

using namespace std;

struct SISWA {
  char NIM[9];
  char Nama[25];
  char Kota[15];
  int Usia;
};

int main() {
  // Mendeklarasikan variabel S 
  // bertipe SISWA
  SISWA S;

  // Mengisikan nilai ke dalam variabel S
  strcpy(S.NIM, "10299009");
  strcpy(S.Nama, "Bob");
  strcpy(S.Kota, "Jakarta");
  S.Usia = 35;

  // Mendeklarasikan stream 
  // untuk proses output
  ofstream OUTPUT;

  OUTPUT.open("D:/DATA", 
              ios::out | 
              ios::trunc | 
              ios::binary);

  if (!OUTPUT) {
     cout<<"File tidak dapat dibuka"<<endl;
     return 1;
  }

  // Menulis data ke stream
  OUTPUT.write((char *) &S, sizeof(S));
	
  OUTPUT.close();

  // Mendeklarasikan stream 
  // untuk proses input
  ifstream INPUT;

  INPUT.open("D:/DATA", 
             ios::in | ios::binary);

  if (!INPUT) {
     cout<<"File tidak dapat dibuka"<<endl;
     return 1;
  }

  // Membaca dari stream ke buffer
  INPUT.read((char *) &S, sizeof(S));

  // Menampilkan data
  cout<<S.NIM<<endl;
  cout<<S.Nama<<endl;
  cout<<S.Kota<<endl;
  cout<<S.Usia<<endl;

  INPUT.close();

  return 0;
}
