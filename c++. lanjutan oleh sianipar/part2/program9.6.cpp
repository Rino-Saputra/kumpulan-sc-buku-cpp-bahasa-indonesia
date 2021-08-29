#include<iostream>
using namespace std;

int main ()
{ 
   int A;
   double D, B;

   cout<<"Masukkan dua nilai: ";
   cin>>A>>B;

   try
   {
      if (B == 0)
         throw B;
      if (A > 50)
         throw A;
      else
	  {
         D = A/ B;
         cout<<"D = "<<D<<endl;
	  }
   }

   catch (double C)
   {
      cout<<"Anda masukkan B = 0, silahkan masukkan nilai lain."<<endl;
   }

   catch (int E )
   {
      cout<<"Silahkan masukkan nilai lain yang kurang dari 50 untuk A."<<endl; 
   }

   return 0;
}