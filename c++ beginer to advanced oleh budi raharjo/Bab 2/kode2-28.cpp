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

int main() {
  char* S1;
  char* S2;

  // Melakukan pengisian nilai yang sama 
  // terhadap variabel S1 dan S2
  S1 = (char*) "COBA";
  S2 = (char*) "COBA";

  // Menampilkan hasil perbandingan string 
  // dari variabel S1 dan S2
  cout<<"S1: "<<S1<<", ";
  cout<<"S2: "<<S2<<endl;
  cout<<"Hasil strcmp(S1,S2): "
      <<strcmp(S1, S2)<<endl<<endl;

  // Melakukan perubahan nilai terhadap variabel S1
  S1 = (char*) "Coba";

  // Menampilkan kembali hasil perbandingan string 
  // dari variabel S1 dan S2
  cout<<"S1: "<<S1<<", ";
  cout<<"S2: "<<S2<<endl;
  cout<<"Hasil strcmp(S1,S2): "
      <<strcmp(S1, S2)<<endl<<endl;

  // Melakukan perubahan nilai terhadap variabel S2
  S2 = (char*) "coba";

  // Menampilkan kembali hasil perbandingan string 
  // dari variabel S1 dan S2
  cout<<"S1: "<<S1<<", ";
  cout<<"S2: "<<S2<<endl;
  cout<<"Hasil strcmp(S1,S2): "
      <<strcmp(S1, S2)<<endl<<endl;

  return 0;
}
