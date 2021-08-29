#include<iostream>
#include<algorithm>
using namespace std;

bool Genap(int m)  //definisi dari fungsi untuk angka genap
{
   return !(m%2) ? true : false;
}

int main()
{
   int S[] = {5, 6, 8, 7, 4, 3, 8, 10, 11, 12};

   partition(S, S+10, Genap);

   //mempartisi dan menempatkan angka-angka genap di depan.
   for ( int i =0; i<10 ; i++)
      cout<< S[i]<<" ";

   return 0;
}