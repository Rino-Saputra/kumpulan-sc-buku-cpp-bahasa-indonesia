#include <iostream>
#include <string>	//mencantumkan file header <string>
using namespace std;

int main(){
   string S ;

   if(S.empty()) //menguji apakah string S kosong atau tidak
      cout<<"S kosong"<<endl;

   string Str1;
   Str1 = "SELAMAT DATANG!";	/*inisialisasi dengan karakter-karakter di dalam
								  kutip gandar */

   string Str2 (6,'B');			//Str2 dikonstruksi dengan 6 buah karakter 'B'

   string Str3 (Str1);			//Str3 adalah sebuah salinan dari Str1

   string Str4(Str1,8, 7);		//Str4 dikonstruksi dengan 7 karakter dari Str1
								//diawali dari karakter ke-8.

   string Str5 (Str1.begin()+3, Str1.end()); 
   /*Str5 dikonstruksi dengan iterator (begin()+ 3), yaitu elemen ke-4 dari Str1
     sampai akhir Str1.*/

   string Str6 ("SELAMAT DATANG!!", 8);
   //Str6 dikonstruksi dari 8 karakter pertama dari string yang diapit oleh kutip ganda

   cout<<"Str1 = "<<Str1<<endl;
   cout<<"Str2 = "<<Str2<<endl;;

   cout<<"Str3 = "<<Str3<<endl;
   cout<<"Str4 = "<<Str4<<endl;

   cout<<"Str5 = "<<Str5<<endl;
   cout<<"Str6 = "<<Str6<<endl;

   return 0;
}