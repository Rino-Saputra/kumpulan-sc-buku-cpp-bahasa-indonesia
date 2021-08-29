#include<iostream>
#include<bitset>
using namespace std;

void main ()
{
   unsigned int n = 125 ,m = 11765;

   bitset<16> Bset1(n);
   bitset<16> Bset2(m);

   cout<<"Bit set untuk "<<n<<" adalah Bset1 = "<< Bset1<<endl;

   cout<<"Uji bit 5. Bit ke-5 = "<<Bset1.test(4)<<"\n";

   Bset1.reset(4);
   cout<<"Setelah menetapkan bit ke-5 menjadi 0 (reset) = "<<Bset1.test(4)<<endl;

   cout<<"Bit set untuk "<<11765 <<" adalah Bset2 = "<<Bset2<<endl ;

   cout<<"Uji bit 10. Bit ke-10 = "<<Bset2.test(9)<<endl;

   Bset2.set(9) ;
   cout<< "Setelah menetapkan bit ke-10 menjadi 1 (set) = " <<Bset2.test(9)<<endl;
}