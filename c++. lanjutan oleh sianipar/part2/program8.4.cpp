#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1, Str2, Str3 ;

   Str1 = "Selamat datang ke pertemuan ini";
   Str3 = "John Kristof";

   cout<<"ukuran dari Str1 = "<<Str1.size();
   cout<<"\nUkuran dari Str3 = "<<Str3.size();

   cout<<"\nStr1 awal = "<<Str1<<endl;
   cout<<"Str1.substr(4,11 ) = "<<Str1.substr(4,11)<<endl;

   Str2 = "Anda akan mempelajari C++" ;
   cout<<"Str2 = "<<Str2<<endl;

   string::iterator itr1 =Str2.begin(); //untuk iterator, lihat
   string::iterator itr2 = Str2.end();	//Bab 21

   Str2.erase(itr1+3, itr1+16);
   cout<<"Setelah Str2.erase (itr1+3, itr1+16) = "<<Str2<<endl;

   Str2.erase(4);
   cout<<"Setelah Str2.erase(4) = " <<Str2<<endl;

   Str2.erase();

   if (Str2.empty ())
      cout<<"Setelah Str2.erase(), Str2 menjadi kosong."<<endl;

   return 0;
}