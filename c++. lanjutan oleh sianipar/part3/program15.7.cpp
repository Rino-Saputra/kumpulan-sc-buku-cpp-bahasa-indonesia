#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   unsigned int n = 1123 ,m = 12758;

   bitset<16> Bset1(n);
   bitset<16> Bset2(m);

   cout <<"Bit set untuk "<<n<<" adalah \n";
   cout <<Bset1 <<"\n";

   cout <<"Ukuran dari bit set = "<<Bset1.size()<<endl;

   cout <<Bset2<<endl ;
   cout<<"Nilai ekivalen dengan Bset2 = "<<Bset2.to_ulong()<< endl;

   cout<< Bset2.any()<<endl;
}