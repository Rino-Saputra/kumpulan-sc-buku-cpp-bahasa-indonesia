#include<iostream>
#include<bitset>
using namespace std;

int main ()
{
   unsigned int n = 185;
   unsigned int m = 200;

   bitset<12> Bset1((int) n);
   bitset<12> Bset2((int) m);

   cout<<"Bset1 untuk "<<n <<" adalah = "<<Bset1<<endl;
   cout<<"Bset2 untuk "<< m<<" adalah = "<<Bset2<<endl;
   cout<<"Bset1 OR Bset2 = "<<(Bset1 | Bset2)<<endl;
   cout<<"Bset1 AND Bset2 = "<<(Bset1 & Bset2 )<<endl;
   cout<<"Bset1 XOR Bset2 = "<<(Bset1 ^ Bset2 )<<endl;
   cout<<"Komplemen dari Bset1 = "<< ~ Bset1 <<endl;

   return 0;
}
