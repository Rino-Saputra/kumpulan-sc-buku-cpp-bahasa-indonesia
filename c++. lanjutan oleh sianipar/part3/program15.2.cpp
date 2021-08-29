#include<iostream>
#include<bitset>
using namespace std;

void main ()
{ 
   unsigned long n = 85;
   unsigned long m = 456;

   bitset<16> Bitset1(n);
   bitset<16> Bitset2(m);

   cout<<"Bit set untuk "<<n <<" adalah: \n";
   for (int i = (long) Bitset1.size()-1 ; i>= 0 ; i--)
      cout<<Bitset1[i]<<" ";

   cout<<"\nBit set untuk "<< m<<" adalah: \n";
   for (int j = (long) Bitset2.size()-1; j>=0 ; j--)
      cout<<Bitset2[j]<<" ";
   cout <<"\n";
}