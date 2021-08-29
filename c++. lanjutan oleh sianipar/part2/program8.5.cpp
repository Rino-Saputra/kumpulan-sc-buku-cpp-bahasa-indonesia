#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1(" SELAMAT DATANG!"), Str2("Kristof,") ;

   cout<<"Str1 = "<<Str1<<endl;
   string Str3;

   Str3= Str2 + Str1;
   
   cout<<"Str3 = "<< Str3 << endl;

   string S1 = "Ada";
   string S2 = "ointer";
   string S3 = "P";

   char ch = 't';

   string S4= S1 + ch;
   S2 = S3+S2;

   cout<<"S1 = "<<S1<<"\tS4 ="<<S4<<"\tS2 = "<<S2<<endl;

   string S5;
   cout<<"Semua dalam huruf kecil: \n";
   getline(cin, S5);
   cout<<"S5 = "<<S5<<endl;

   if ( Str1> S5)
      cout<<"Str1 lebih besar dari S5."<<endl;
   else
      cout<<"Str5 lebih besar dari S1."<<endl;

   if (S1==Str1)
      cout<<"S1 dan Str1 sama."<<endl;
   else
      cout<<"S1 dan Str1 tidak sama."<<endl;

   if (S4>S1)
      cout<<"S4 lebih besar dari S1."<<endl;
   else
      cout<<"S1 lebih besar dari S4."<<endl;

   return 0;
}