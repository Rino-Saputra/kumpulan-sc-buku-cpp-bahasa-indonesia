#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef map <string, int> Mint;
/*typedef digunakan untuk menghindari penulisan map<string, int> berulangkali.
Pada deklarasi, kunci adalah sebuah string dan nilai int.*/

int main()
{
   string Nama;
   int Skor;

   Mint Nilai; //Nilai adalah nama map

   for (int i = 0; i<4; i++)
   {
      cout<<"Masukkan Nama: ";
	  cin>>Nama;
	  cout<<"Masukkan Skor: ";
      cin>>Skor;

	  Nilai[Nama] = Skor;
   } //membuat pasangan-pasangan nilai

   Mint :: iterator iter; // deklarasi iterator

   for(iter = Nilai.begin(); iter != Nilai.end(); iter++)
      cout<<(*iter).first<<"\t"<<(*iter).second<<"\n";
      /*first adalah kunci dan second adalah nilai. Operator dot dipakai
	    untuk memilih first dan second.*/

   return 0;
}