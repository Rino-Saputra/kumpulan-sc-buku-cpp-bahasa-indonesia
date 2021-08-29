#include <iostream>
using namespace std;
const n =10;

class Vektor
{
   int x[n]; // n buah komponen Vektor atau array

   public:
      Vektor(int A[n]) 
	  {
         for (int i = 0; i < n; i++)
            x[i] = A[i];
	  }

      Vektor(){};

      friend int operator* (Vektor P, Vektor S);
}P, S; //akhir dari kelas Vektor

int operator* (Vektor P, Vektor S)
{
   int IP = 0;

   for (int j =0; j< n; j++)
      IP = IP + P.x[j] * S.x[j];

   return IP;
}

int main()
{
   int C1[] = {4, 3, 2, 3, 2, 5, 3, 1, 2, 3};
   int C2[] = {4, 2, 1, 3, 2, 1, 3, 1, 4, 2};

   Vektor V1(C1);
   Vektor V2(C2);

   int perkalianDot = V1 * V2;
   cout<<"Perkalian dot atas V1 dan V2 = "<<perkalianDot<<endl;

   return 0;
}