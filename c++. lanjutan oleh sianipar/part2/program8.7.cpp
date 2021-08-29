#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1, Str2, Str3(6, 'B') ;

   Str1 = "SELAMAT DATANG!";
   Str2 = "Apakah Anda akan berangkat ke Siantar?";

   cout<<(Str2.find_first_not_of(Str1))<<endl;
   cout<<(Str2.find_last_not_of(Str1))<<endl;

   cout<<(Str2.find_first_of(Str1))<<endl;
   cout<<(Str2.find_last_of(Str1))<<endl;

   Str3.replace(1,5 ,"Jakarta");
   //mengganti 5 elemen Str3 diawali dari indeks 1

   cout<<"Sekarang Str3 = "<< Str3<<endl;

   return 0; 
}