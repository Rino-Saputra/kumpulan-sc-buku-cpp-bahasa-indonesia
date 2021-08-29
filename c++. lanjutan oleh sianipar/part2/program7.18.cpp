#include<iostream>
#include<complex>
using namespace std;

int main ()
{ 
   complex<double> a(4.5, 5.5) ;
   complex<int> b(2,3) ;

   complex<int> g(3,4) ;
   complex<double> e(1.4, 3.4);

   complex<double> C = a + e ;
   complex<int>D = g - b;

   complex<int> Perkalian = b*b ;

   cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\n";
   cout<<"C= "<<C<<"\t"<<"D = "<<D<<"\n";

   cout<<"Perkalian b*b = "<<Perkalian<<endl;

   return 0;
}