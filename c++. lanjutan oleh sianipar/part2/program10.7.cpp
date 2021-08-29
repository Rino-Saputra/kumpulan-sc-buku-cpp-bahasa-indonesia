#include <iostream>
using namespace std;

void main()
{ 
   char ch = 'r'; //berikutnya, 'r' dipakai sebagai karakter pembatas
   char C[30] ;

   cout<<"Masukkan nama: ";
   cin.getline(C,30);

   cout<<"Anda memasukkan nama: ";
   cout<<C;

   char B[20];
   cout<<"\nMasukkan nama: ";
   cin.get(B,20, ch);	//membaca sampai r (r tidak termasuk dibaca)

   cout <<"Anda menuliskan: "<<B<<endl;
}