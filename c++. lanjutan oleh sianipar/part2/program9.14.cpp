#include<iostream>
using namespace std;
#include<cmath>
#include<exception>

double AkarKuadrat(int n) throw (invalid_argument)
{
   if (n < 0)
      throw logic_error("invalid_argument untuk akar kuadrat");

   return sqrt(n);
}

int main()
{
   int m;

   cout<<"Masukkan sebuah nilai integer: ";
   cin>>m;

   try
   {
	  cout<<"Akar kuadrat dari "<<m<<" adalah "<<AkarKuadrat(m)<<endl;
   }

   catch (exception& eksp)
   {
      cout<<eksp.what()<<endl; 
   }

   return 0;
}