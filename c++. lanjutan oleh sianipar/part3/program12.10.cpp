#include<iostream>
#include<queue>
using namespace std;

int main()
{
   queue<int> q2,q3 ;
   queue<double> q1;

   for (int i =0; i< 6; i++)
   {
      q1.push (1.5*i);
      q2.push (i*i);
   }

   q3 = q2; //operator penugasan

   if( q2 == q3)
      cout<<"Sekarang antrian q2 dan q3 sama."<<endl;
   else
      cout<<"Sekarang antrian q2 dan q3 tidak sama."<<endl;

   cout<<"Elemen-elemen antrian q2 adalah: ";
   while(!q2.empty())
   {
      cout<<q2.front()<<" " ;
      q2.pop();
   }
   cout<<"\n";

   cout<<"Elemen-elemen antrian q3 adalah: ";
   while(!q3.empty())
   {
      cout<<q3.front()<<" " ;
      q3.pop();
   }
   cout<<"\n";

   if( q2 == q3)
      cout<<"Antrian q2 dan q3 sama."<<endl;
   else
      cout<<"Antrian q2 dan q3 tidak sama."<<endl;

   cout<<"menempatkan elemen lain, 10, ke dalam q3 \n";
   q3.push (10);

   cout<<"Elemen-elemen antrian q3 adalah: ";
   while(!q3.empty())
   {
      cout<<q3.front()<<" " ;
      q3.pop();
   }
   cout <<"\n";

   cout<<"Elemen-elemen antrian q1 adalah: ";
   while(!q1.empty())
   {
      cout<<q1.front()<<" " ;
      q1.pop();
   }
   cout <<"\n";

   return 0;
}