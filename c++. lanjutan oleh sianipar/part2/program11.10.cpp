#include<iostream>
using namespace std;

#define Fungsi(y) cout<<"Selamat Pagi" #y<<endl;
#define SAMBUNG(a, b) a ## b

void main()
{
   Fungsi(Pak!);

   cout<<SAMBUNG(5, 7)<<endl;
   cout<<SAMBUNG("O", "K")<<endl;
   cout<<SAMBUNG("Selamat", " Pagi Kristof!")<<endl;
}