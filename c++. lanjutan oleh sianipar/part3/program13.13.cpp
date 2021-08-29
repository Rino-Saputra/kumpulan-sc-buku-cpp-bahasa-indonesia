#include<iostream>
#include<list>
using namespace std;

list<int> L1,L2;

void main()
{
   for (int i=1; i<5;i++)
   { 
      L1.push_back(i);
      L2.push_back(i*i);
   }

   cout<<"List-list diberikan sebagai berikut: "<<endl;
   cout<<" List1\t List2 "<<endl;
   list<int>::iterator T1;
   list<int>::iterator T2;
   for(T1=L1.begin(),T2=L2.begin(); T1 != L1.end() ;T1++,T2++ )
      cout<<" "<<*T1 <<" \t "<< *T2 <<endl;

   L1.merge(L2); //menyambung L2 dengan L1
   cout<<"Lis list1 yang baru:"<< endl;
   for (T1=L1.begin() ; T1 != L1.end(); T1++ )
      cout<<" " <<*T1 <<" " ;

   if (L2.empty())
      cout<<"\nL2 sekarang kosong."<<endl;
}