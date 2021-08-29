#include <iostream>
#include<string>
using namespace std;

int main()
{
   string Str1 = "Hallo! Selamat Pagi!";
   string Str2 = "Begitu juga untuk Anda";
   string Str3 = "Mari belajar C++";

   if(Str3 !=Str2)
      cout<<"Str3 dan Str2 berbeda."<<endl;

   cout<<(Str1 == Str2 ? "True": "False" )<<"\n";
   cout<<"Sebelum penugasan\n Str1 = "<<Str1<<endl;
   cout<<" dan \n Str2 = "<<Str2<<endl;

   Str3 = Str2 = Str1;
   cout<<"Setelah penugasan"<<endl;
   cout<<" Str1= "<<Str1<<"\n Str2 = "<<Str2 <<"\n Str3 = " <<Str3 <<endl;

   return 0 ;
}