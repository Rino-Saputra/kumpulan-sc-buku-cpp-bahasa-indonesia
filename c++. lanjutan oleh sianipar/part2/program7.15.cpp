#include <iostream>
using namespace std;

template <class T, class U> //template kelas dengan multi tipe data
class Rekt
{
   private:
      T x;
      U y;

   public:
      Rekt (T A, U B) {x = A, y = B;}
      friend U Luas (const Rekt &R); //template fungsi friend
};

template <class T, class U>
U Perkalian(T x, U y)
{
   return x*y;
}

template <class T, class S, class U>
S Perkalian (T x, S y, U z)
{
   return x*y*z;
}

int main ()
{ 
   int a (1);
   double B(1.5);
   char Ch('D');

   cout<<"Perkalian(a, B, Ch) = "<<Perkalian(a, B, Ch)<<endl;;
   cout<<"Perkalian(a, B) = "<<Perkalian(a, B)<<endl;
   cout <<"Perkalian('A', 4.5, 6) = "<<Perkalian('A', 4.5, 6)<<endl;

   return 0;
}