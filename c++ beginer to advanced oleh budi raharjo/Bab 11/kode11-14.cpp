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

enum TIPETRANSMISI {automatic, manual};

// Membuat kelas MOBIL
class MOBIL {
  char merk[25];
  TIPETRANSMISI transmisi;
  int tahun;
  int silinder;
  char nopolisi[11];
  char warna[15];
public:
  void SetMobil(char *merk,
                TIPETRANSMISI transmisi,
                int tahun,
                int silinder,
                char *nopolisi,
                char *warna) {
    strcpy(this->merk, merk);
    this->transmisi = transmisi;
    this->tahun = tahun;
    this->silinder = silinder;
    strcpy(this->nopolisi, nopolisi);
    strcpy(this->warna, warna);
  }
  void ShowInfoMobil() {
    cout<<"Merk	\t: "<<merk<<endl;
    cout<<"Transmisi \t: ";
    switch (transmisi) {
      case 0: cout<<"Automatic\n"; break;
      case 1: cout<<"Manual\n"; break;
    }
    cout<<"Tahun	 \t: "<<tahun<<endl;
    cout<<"Silinder \t: "<<silinder<<endl;
    cout<<"No Polisi	\t: "<<nopolisi<<endl;
    cout<<"Warna	 \t: "<<warna<<endl;
  }
};

// Fungsi utama
int main() {

  // Melakukan instansiasi terhadap kelas MOBIL
  MOBIL M;

  // Menentukan data ke dalam objek M
  M.SetMobil(
    (char*) "Toyota Land Cruiser UK",
    automatic,
    2012,
    4500,
    (char*) "D 99 AH", 
    (char*) "Hitam"
  );

  // Menampilkan data pada objek M
  M.ShowInfoMobil();

  return 0;
}
