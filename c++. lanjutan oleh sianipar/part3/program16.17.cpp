#include<iostream>
#include<algorithm>
using namespace std;

void Tampil(int x)
{
   cout<<x<<" ";
}

int main()
{ 
   int S[8] = { 0 };
   generate (S, S+8, rand);

   for ( int i =0; i<8; i++)
      Tampil(S[i]%100);
   cout<<"\n";

   int B [6] = {0};
   generate_n(B , 6, rand);

   for(int j =0; j<6; j++)
      Tampil(B[j]);
   cout<<"\n";
   
   return 0 ;
}