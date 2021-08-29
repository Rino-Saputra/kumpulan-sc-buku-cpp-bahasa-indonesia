#include<iostream>
#define Panjang 40	//Pendefinisian pertama harus sebelum main()
using namespace std;

int main()
{ 
   cout<<"Panjang awal = "<<Panjang<<endl;
   #undef Panjang

   #define Panjang 60
   cout<<"Panjang baru = "<<Panjang<<endl;

   return 0; 
}