#include <iostream>
using namespace std;

class Vektor{
   private:
      int x, y, z ; //tiga komponen Vektor

   public :
      Vektor (int a, int b, int c) {x =a ; y = b; z =c;}
      Vektor (){};
      friend int &operator*(const Vektor &, const Vektor & ); //dua parameter
}; //akhir dari kelas Vektor

int & operator* (const Vektor &S, const Vektor &P ) //definisi fungsi
{ 
   int perkalianDalam;
   perkalianDalam = S.x * P.x + S.y * P.y + S.z *P.z;
   
   return perkalianDalam;
}

int main()
{ 
   Vektor V1(3, 5, 5);
   Vektor V2(10, 6, 8);

   int perkalianDot = V1 * V2;
   cout<<"Perkalian dot atas V1 dan V2 = "<<perkalianDot<<endl;

   return 0;
}