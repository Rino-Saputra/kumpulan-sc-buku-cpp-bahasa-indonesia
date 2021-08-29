#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef map <string, int> Map_Nilai;

int main()
{
   string Nama ;
   int Skor;
   
   Map_Nilai Nilai1 ;

   for (int i = 0; i<4; i++)
   {
      cout<<"Masukkan sebuah nama: ";
      cin>>Nama;
      cout<<"Masukkan skor yang didapatkan: "; 
      cin>>Skor;
      Nilai1[Nama] = Skor;
   }


   Map_Nilai Nilai2;
   Nilai2 = Nilai1 ; //aplikasi dari operator penugasan pada map

   Nilai1.insert (Map_Nilai::value_type("Kristof", 85));
   
   Map_Nilai :: iterator iter;
   iter = Nilai1.begin();

   cout<<"Daftar Nilai1 adalah sebagai berikut: "<<endl;
   for( iter = Nilai1.begin(); iter != Nilai1.end(); iter++)
      cout<< (*iter).first<<" \t " <<(*iter).second<<"\n";

   Map_Nilai :: iterator iter2;

   cout<<"Daftar Nilai2 adalah sebagai berikut: "<<endl;
   iter2 = Nilai2.begin();
   for( iter2 = Nilai2.begin(); iter2 != Nilai2.end(); iter2++)
      cout<< (*iter2).first<<" \t "<<(*iter2).second<<"\n";

   return 0;
}
