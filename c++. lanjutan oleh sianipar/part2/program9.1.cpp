#include<iostream>
using namespace std;

int main ()
{ 
   int A, B;
   double D;

   cout<<"Masukkan dua nilai: ";
   cin>> A>>B;

   try	//blok try
   { 
      if( B == 0)
      throw B;	//melempar eksepsi

      else
	  { 
	      D = A/double(B);
          cout<<"D = "<<D<<endl; 
	  }
   } //akhir dari blok try

   catch (int C)	//blok penanganan eksepsi diawali di sini
   { 
	   cout<<"Anda memasukkan B = 0, masukkan nilai lain"<<endl;
   }

   return 0;
}