#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef map <string, int > Map_Nilai;

int main()
{ 
   string Nama ;
   int Skor;

   Map_Nilai Nilai;

   for (int i = 0; i<4; i++)
   {
      cout<<"Masukkan sebuah nama: ";
      cin>>Nama;
      cout<<"Masukkan skor yang didapatkan: "; 
      cin>>Skor;
      Nilai[Nama] = Skor;
   }

   Nilai.insert (Map_Nilai::value_type ("Kristof", 85));
   Nilai.insert (Map_Nilai ::value_type ("John",90));

   cout<<"\n"<<Nilai.size()<<endl; //jumlah elemen

   Map_Nilai::iterator iter;
   for(iter = Nilai.begin() ; iter != Nilai.end(); iter++)
      cout<< (*iter).first<<"\t"<<(*iter).second<<"\n";

   return 0;
}