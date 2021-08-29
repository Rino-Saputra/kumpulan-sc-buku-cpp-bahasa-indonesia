#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   unsigned int n = 125, m = 11765, p = 0;

   bitset<16> Bset1(n);
   bitset<16> Bset2(m);
   bitset<16> Bset3(p);

   cout <<"Bset3 = "<<Bset3<<endl;
   cout<<"Jumlah bit 1 di dalam Bset3 = "<<Bset3.count()<<endl;

   if (Bset3.any())
      cout<< "ya, ada bit 1 di dalam Bset3"<<endl;
   else
      cout<<"tidak ada bit 1 di dalam Bset3"<<endl;

   if (Bset3.none())
      cout<<"Tidak ada bit 1 di dalam Bset3"<<endl;
   else
      cout<<"Ada bit 1 di dalam Bset3"<<endl;

   cout <<"Bit set untuk "<<n <<" adalah = "<< Bset1<<endl ;
   
   Bset1.reset(5);
   cout <<"Setelah mereset bit ke-6, Bset1 menjadi = "<<Bset1<<"\n";
   
   cout <<"Bit set untuk "<< m<<" adalah = "<<Bset2<<endl ;
   
   cout<<"Jumlah bit 1 di dalam Bset2 = "<<Bset2.count()<<endl;
   
   Bset2.set (3);
   cout <<"Setelah menetapkan bit ke-4 menjadi 1, Bset2 menjadi = "<<Bset2<<endl ;
}