#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   unsigned int n = 185 ,m = 221 ;

   bitset<16> Bset1(n);
   bitset<16> Bset2(m);

   cout <<"Bit set untuk "<<n <<" adalah = "<< Bset1 <<"\n";
   cout <<"Setelah pergeseran kanan sejauh 4 bit"<<endl;
   cout<<"Bset1 = "<<(Bset1 >>= 4)<<endl;  //pergeseran kanan dan penugasan

   cout <<"Bit set untuk "<< m<<" adalah = "<< Bset2<<endl ;
   cout <<"Setelah pergeseran kiri sejauh 3 dijit"<<endl;
   cout<<"Bset2 = "<< (Bset2 <<= 3)<<endl; //pergesaran kiri dan penugasan

   if (Bset1 == Bset2) //memeriksa ekualitas
      cout<<"Bset1 dan Bset2 sama"<<endl;
   else
      cout<<"Bset1 dan Bset2 tidak sama"<<endl;
}