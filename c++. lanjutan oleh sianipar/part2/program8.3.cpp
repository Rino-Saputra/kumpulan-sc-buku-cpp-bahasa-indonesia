#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1, Str2, Str3 ;

   Str1 = "Selamat Datang!";
   Str2 = "Jika Anda ingin belajar C++,";
   Str3 = "Jika Anda ingin mendaftar ke lembaga pemrograman ini,";

   cout<<"Ukuran dari Str1 = "<<Str1.size ()<<endl;
   cout<<"Kapasitas dari Str1 = "<< Str1.capacity()<<endl;

   cout<<"Sebelum penempatan (di akhir string) \nStr1 ="<<Str1;
   cout<<"\nStr2 = " << Str2<<"\nStr3 = "<< Str3<<endl;

   Str2.append(Str1);	//Str1 ditempatkan di belakang Str2
   Str3.append (Str1);	//Str1 ditempatkan di belakang Str3

   cout<<"Setelah penempatan (di akhir string)\nStr2 = "<<Str2<<"\n"<<"Str3 = "<<Str3<<endl;

   Str1.assign (Str2);	//Str2 ditugaskan kepada Str1
   cout<<"Setelah penugasan \nStr1 = "<<Str1<<endl;

   cout<<"Elemen pada lokasi 5 dari Str2 adalah "<<Str2.at(5)<< endl;

   return 0 ;
}