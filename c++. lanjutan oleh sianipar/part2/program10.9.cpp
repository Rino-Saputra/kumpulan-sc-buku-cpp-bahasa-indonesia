#include <iostream>
using namespace std;

int main()
{
   char kalimat [] = "Pergi ke sekolah";
   
   cout.write(kalimat , 13).put('\n');	//put('\n') dipakai untuk
										//menggantikan endl

   char ch[] = "A";

   cout<<"ch = ";
   cout.write(ch,1)<<endl;	//diminta untuk menuliskan satu byte dari ch.

   char CH[] = "ABCDEFGHIJC" ;
   cout.write(CH, 5)<<endl; //diminta untuk menuliskan 5 byte/karakter

   char Nama[9];
   cout<<"Tuliskan nama: ";
   cin.read(Nama ,9);	//diminta untuk membaca 9 byte/karakter

   cout.write(Nama, 9)<<endl;	//diminta untuk membaca 9 byte dari Nama
 
   return 0;
}