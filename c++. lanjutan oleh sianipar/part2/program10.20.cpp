#include <fstream>
#include <iostream>
using namespace std;

int main ()
{ 
   ofstream outfile("fileKu");

   outfile<<"Saya yakin Anda bisa mempelajari bahasa C++.\n" ;
   outfile<<"Anda memerlukan kompiler untuk berlatih.\n";

   outfile.put('M');	//menuliskan karakter M
   outfile.put('E').put('D').put('A').put('N').put('\n');

   outfile.close();

   if (outfile.is_open())	//menggunakan is_open
      cout<<"File terbuka."<<endl;
   else
      cout<<"File terturup."<<endl;

   char kh;
   ifstream infile ("fileKu");

   while (infile)
   {
      infile.get(kh);	//membaca file karakter demi karakter
      cout << kh ;		//menampilkannya pada monitor
   } 

   infile.close();

   if(!(outfile.is_open()))
      cout<<"File tertutup"<<endl;

   return 0 ;
}