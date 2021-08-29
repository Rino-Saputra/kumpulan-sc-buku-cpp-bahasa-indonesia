#include <iostream>
#include <string>
using namespace std;

int main()
{
   string Str1, Str2, Str3, Str4 ;

   Str1 = "Selamat datang untuk Anda!";

   Str2 = Str1;		//penugasan

   cout<<"Str2 = "<<Str2;

   Str3 = "Jika Anda ingin bergabung dengan kami,";
   cout<<Str3;

   cout<<"\ndata = "<<Str2.data();

   if ((Str1.compare(Str2)) ==0)
      cout<<"\nStr1 dan Str2 sama."<<endl;
   else
      cout<<"Str1 dan Str2 tidak sama." <<endl;

   cout<<"Di dalam Str1, substring tang ditemukan pada "<<Str1.find("tang")<<endl;

   char S[12];	// string-C atau array karakter
   memset(S,'\0',12) ;	//fungsi memset() mengisi 12 elemen dari array S
						//dengan karakter Null

   Str3.copy(S, 11);	//menyalin 11 karakter pertama dari Str3
   cout<<"Jumlah karakter yang disalin = "<<Str3.copy(S, 11)<<endl;
   //menampilkan jumlah karakter yang disalin

   cout<<S<<endl;		//menampilkan string-C, yaitu S
   cout<<Str3<<endl;	//menampilkan Str3

   return 0;
}