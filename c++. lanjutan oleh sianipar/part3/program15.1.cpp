#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   short int p = 75;
   short k = -75;
   unsigned int n = 285;
   unsigned long m = 24567854;

   bitset<8> Bitset1(p), Bitset2(k), Bitset3('B');
   bitset<16> Bitset4(n);
   bitset<24> Bitset5 (m);

   cout<<"Bit set untuk "<<p <<" adalah : "<<Bitset1<<endl;
   cout<<"Bit set untuk "<<k <<" adalah : "<<Bitset2<<endl;
   cout<<"Bit set untuk "<<'B'<<" adalah : "<<Bitset3<<endl;
   cout<<"Bit set untuk "<<n <<" adalah : "<<Bitset4 <<endl;
   cout<<"Bit set untuk "<<m <<" adalah : "<<Bitset5 <<endl;
}