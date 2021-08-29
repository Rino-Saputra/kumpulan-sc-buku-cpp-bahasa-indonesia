#include <iostream>
using namespace std;

template <class T>
T Perkalian(T x, T y)
{return x*y;}

template <class T>
T Perkalian( T x, T y, T z)
{return x*y*z;}

int main ()
{ 
   int a (2), b(3), c(4);
   double A(2.0), B(5.5), C(1.5);

   cout<<"Perkalian(A, B, C) = "<<Perkalian(A, B, C)<<endl;;
   cout<<"Perkalian(A, B) = "<<Perkalian(A, B)<<endl;

   cout<<"Perkalian(a, b, c) = "<<Perkalian(a, b, c)<<endl;

   return 0;
}