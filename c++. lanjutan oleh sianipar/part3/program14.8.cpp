#include<iostream>
using namespace std;
#include<map>
#include<string>

typedef map <string, int> Map_Nilai;

int main()
{
   string Nama ;
   int Skor;
   Map_Nilai Nilai; //Nilai adalah nama dari map

   for (int i = 0; i<4; i++)  //loop for membaca nama dan skor
   { 
      cout<<"Masukkan sebuah nama: ";
	  cin>>Nama;
      cout<<"Masukkan skor yang didapatkan: "; 
      cin>>Skor;
      Nilai[Nama] = Skor;
   }

   //Berikut adalah nama dan skor lain yang disisipkan
   Nilai.insert (Map_Nilai::value_type("Sinaksak", 85));

   //Menyisipkan sebuah entri nama dan nilai
   cout<<"Daftar nilai adalah sebagai berikut:\n\n";
   Map_Nilai :: iterator iter;  //deklarasi dari iterator
   iter = Nilai.begin();
   //berikut adalah loop for untuk menampilkan
   for( iter = Nilai.begin(); iter != Nilai.end(); iter++)
      cout<< (*iter).first<<"\t" <<(*iter).second<<"\n";

   return 0;
}