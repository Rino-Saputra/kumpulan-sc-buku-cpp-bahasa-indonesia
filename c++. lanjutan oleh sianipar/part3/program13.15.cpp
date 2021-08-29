#include<iostream>
# include <deque>
using namespace std;

int main()
{ 
   deque <double> Q1;

   for ( int i =0; i< 7;i++)
      Q1.push_back (1.5*i);

   cout<<"Elemen-elemen queue adalah: "<<endl;
   for ( int j = 0; j<6; j++)
      cout <<" "<< Q1[j]<<" " ;
   cout<<endl;

   cout <<"Ukuran dari Q1 adalah: " <<Q1.size()<<endl;
  
   Q1.pop_back();
   Q1.pop_front();

   cout<<"Sekarang ukuran dari Q1 adalah: "<<Q1.size()<<endl;
   
   deque <double> :: iterator itr; // itr adalah nama dari iterator
   Q1.insert((Q1.begin() +2),2,50.5); ;
   //menyisipkan 2 elemen dengan nilai 50.5.

   cout<<"Elemen-elemen dari Q1 adalah: "<<endl;
   for ( itr = Q1.begin(); itr < Q1.end() ; itr ++)
      cout<<*itr <<" " ;
   cout<<endl;

   return 0;
}