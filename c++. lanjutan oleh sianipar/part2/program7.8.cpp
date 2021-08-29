#include <iostream>
using namespace std;
template <class T , class E> E maks(T x, E y)
{
   return x>y ? x : y;
}

int main()
{
   int n = 88 ;
   double m = 80.4 ;

   int ch1 = 67 ;
   char ch2 = 'A';

   double D1 = 76.87, D2= 90.3;
   
   cout<<"maks(n, m)= "<<maks(n,m)<<endl;
   cout<<"maks(ch1,ch2) = "<<maks(ch1,ch2)<<endl;

   cout<<"maks(D1,D2) = "<<maks(D1, D2)<< endl;
   cout<<"maks(n,D2) = "<<maks(n,D2)<<endl;

   return 0;
}