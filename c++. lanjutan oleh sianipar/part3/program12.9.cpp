#include<iostream>
#include<queue>
using namespace std;

void main()
{
   queue <int> Q ;

   for (int i =1; i<7; i++)
      Q.push (10* i);

   //Pada antrian, tidak ada fungsi top(), tetapi yang dimiliki
   //adalah fungsi front().
   //Penampilan elemen-elemen dari depan antrian diilustrasikan
   //di bawah ini.

   cout<<"Elemen di depan antrian Q adalah = "<<Q.front()<<endl;

   cout<<"Ukuran dari antrian Q adalah = "<<Q.size()<<endl;

   cout<<"Elemen-elemen dari Q adalah: ";
   while(!Q.empty()) //statemen keluaran untuk antrian
   {
      cout<<Q.front()<<" ";
      Q.pop(); 
   }
   cout<<endl;
}