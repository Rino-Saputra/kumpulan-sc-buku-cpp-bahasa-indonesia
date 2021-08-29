#include<iostream>
#include<bitset>
using namespace std;

int main ()
{
   unsigned int n = 185;
   int m = 200;

   bitset<12> Bset1((int) n);
   bitset<12> Bset2((int) m);

   cout <<"Bset1 awal untuk "<<n <<" adalah = "<<Bset1<<endl;
   cout <<"Bset2 awal untuk "<< m<<" adalah = "<<Bset2<<endl;
   cout <<"Bset1 baru = Bset1 |= Bset2 = "<<(Bset1 |= Bset2)<<endl;
   cout <<"Bset1 baru = Bset1 &= Bset2 = "<<(Bset1 &= Bset2 )<<endl;
   cout <<"Bset1 baru = Bset1 ^= Bset2 = "<<(Bset1 ^= Bset2 )<<endl;
   cout <<"Bset2 dibalik = ~ Bset2 = "<< ~Bset2 <<endl;

   return 0;
}