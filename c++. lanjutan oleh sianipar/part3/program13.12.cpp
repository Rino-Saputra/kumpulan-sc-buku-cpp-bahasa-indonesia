#include<iostream>
#include<list>
using namespace std;

list <char> L1 ;
list<int> L2;

int main()
{
   for (int i=0; i<5;i++)
   { 
      L1.push_back(65+i);
      L2.assign( 5, 50 ); 
   }

   list<char> ::iterator T1= L1.begin();

   cout<<"List L1 adalah:"<<endl;
   while (T1 !=L1.end())
   {
      cout <<" "<<*T1 <<" ";
      T1++; 
   }
   cout<<"\n";

   list <int> :: iterator T2 = L2.begin();

   cout<<"List L2 adalah: "<<endl;
   while (T2 !=L2.end())
   {
      cout<<" "<<*T2<<" ";
      T2++;
   }
   cout<<"\n";

   cout<<"Elemen pertama dari L1 adalah: "<<L1.front()<<endl;
   cout<<"Elemen terakhir dari L1 adalah: "<<L1.back()<<endl;

   return 0;
}