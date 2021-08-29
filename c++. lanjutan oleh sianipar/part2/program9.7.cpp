#include<iostream>
using namespace std;

class Basis
{ };

int main ()
{ 
   Basis obj_basis ;

   int A;
   double B, D;
   char ch;

   cout<<"Masukkan sebuah integer, sebuah double, dan sebuah karakter: ";
   cin>>A>>B>>ch;

   try
   { 
      if(B == 0.0)
         throw obj_basis;
      if (A > 50)
         throw A;
      if(ch != 'Z')
         throw ch;
      else
	  { 
         D = A/double(B);
         cout <<"D = "<<D<<endl; 
	  }
   } //akhir dari blok try

   catch (...) //blok penanganan eksepsi diawali di sini
   {
      if (A >50)
         cout<<"Eksepsi pada int ditangkap."<<endl;
      if (B==0)
         cout<<"Eksepsi pada Basis ditangkap."<<endl;
      if(ch != 'Z')
         cout<<"Eksepsi pada char ditangkap."<<endl; 
   }

   return 0;
}