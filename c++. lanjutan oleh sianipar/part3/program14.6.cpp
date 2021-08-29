#include <iostream>
#include<set>   //File header sama untuk set dan multiset
using namespace std;

typedef std::multiset<int> IntMset;

int main()
{ 
   const int n = 8;
   int bill[n] = {20, 50, 10, 15, 70, 10, 40, 10};

   IntMset Xset(bill , bill+n); //konstruksi dari set
   IntMset::iterator iter;      //deklarasi dari iterator.

   cout<<"Ukuran dari Xset = " << Xset.size()<<endl;
   
   cout<<"Elemen-elemen di dalam Xset adalah: ";
   for (iter = Xset.begin(); iter != Xset.end(); iter++)
      cout<< *iter<<" " ;

   cout<<"\nUpper_bound = "<<*(Xset.upper_bound(50))<<endl;

   cout<<"Jumlah salinan 10 di dalam Xset adalah = "<< Xset.count (10)<<endl;

   return 0;
}