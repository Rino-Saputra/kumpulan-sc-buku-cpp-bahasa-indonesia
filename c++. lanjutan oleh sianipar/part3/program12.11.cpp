#include<iostream>
#include<queue>
using namespace std;

void main()
{
   priority_queue <int> PQ ; //deklarasi antrian prioritas
   int Array[6] = {10, 80, 90, 20, 40, 70};

   for ( int i =0; i<6; i++)
      PQ.push (Array[i]);

   //pada antrian prioritas, tidak ada front(), tetapi yang ada top()
   cout<<"Elemen di atas (depan) antrian PQ = "<<PQ.top()<<endl;

   cout<<"Ukuran dari antrian PQ adalah = "<<PQ.size()<<endl;

   cout<<"Elemen-elemen dari PQ adalah: ";
   while(!PQ.empty())
   {
      cout<<PQ.top()<<" ";
      PQ.pop(); 
   }
   cout<<endl;
}