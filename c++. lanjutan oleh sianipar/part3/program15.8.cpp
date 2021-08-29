#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   unsigned int n = 1123, m = 12758;

   bitset<16> Bset1(n);
   bitset<16> Bset2(m);

   cout <<"Bit set untuk "<<n <<" adalah \n";
   cout <<Bset1<<"\n";

   cout <<"Kebalikan dari bit set = "<<Bset1.flip()<<endl;

   cout <<Bset1.none()<<endl;
   cout <<Bset2<<endl ;

   cout<<"Apakah kedua bit set sama?"<<endl;
   if (Bset1 == Bset2)
      cout <<"Ya"<<endl;
   else
      cout <<"Tidak"<<endl;

   cout<<"Apakah kedua bit set tidak sama?"<<endl;
   if (Bset1 != Bset2)
      cout <<"Ya"<<endl;
   else
      cout <<"Tidak"<<endl;
}