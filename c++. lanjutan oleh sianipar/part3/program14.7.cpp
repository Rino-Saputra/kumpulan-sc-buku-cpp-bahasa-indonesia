#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef map <string, int> Mint ;
//typedef dipakai untuk menghindari penulisan
//map <string, int> berulangkali

int main()
{
   Mint DaftarHarga;
   string Metal[3] = {"baja", "perak", "perunggu"};
   int NilaiArr[3] = { 20, 200, 180};

   for (int j = 0; j<3; j++)
      DaftarHarga[Metal[j]] = NilaiArr[j] ; //membaca ke dalam map

   Mint::iterator iter; //deklarasi dari iterator.
   
   cout <<"Harga-harga adalah sebagai berikut"<<endl;
   for (iter= DaftarHarga.begin();iter != DaftarHarga.end(); iter++)
      cout<<(*iter).first<<"\t\t"<<(*iter).second<<endl;

   iter = DaftarHarga.begin();
   (*iter).second = 250;      //Mengubah nilai terkait
   (*(++iter)).second = 350;  //Mengubah nilai terkait
   (*(++iter)).second = 25 ;  //Mengubah nilai terkait

   cout<<"Harga-harga setelah revisi adalah sebagai berikut"<<endl;
   for ( iter= DaftarHarga.begin();iter != DaftarHarga.end(); iter++)
      cout<< (*iter).first<<"\t\t"<<(*iter).second<<endl;

   return 0;
}