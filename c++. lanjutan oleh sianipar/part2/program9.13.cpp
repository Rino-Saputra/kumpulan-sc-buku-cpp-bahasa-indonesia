#include <iostream>
#include <stdexcept>
using namespace std;

double Resiprokal(double A) throw (overflow_error)
{ 
   cout<<"Tulislah sebuah nilai sangat kecil :"; 
   cin>> A;

   if(A < 0.000001)
      throw overflow_error("Resiprokal terlalu besar.");

   return 1/A ;
}

int main ()
{
   try
   {
      double B =0.0;

	  cout<<"Resiprokal dari B = "<<Resiprokal(B)<<endl; 
   }

   catch (exception & x)
   { 
      cout<<"Eksepsi -> "<< x.what()<<endl; 
   }

   return 0;
}