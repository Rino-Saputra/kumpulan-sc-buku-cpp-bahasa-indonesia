#include<iostream>
#include<vector>
using namespace std;

vector<int> V1 , V2 ;	//deklarasi dari dua vektor

int main()
{
   V1.push_back(10);	//Menggunakan fungsi push_back() untuk menciptakan V1
   V1.push_back(20);
   V1.push_back(30);

   vector<int> :: iterator iter = V1.begin();	//iterator untuk V1

   cout<<*iter<<"\t"<<*(iter+1)<<"\t"<<*(iter +2) <<endl;
   cout<<iter<<"\t"<<iter+1<<"\t"<<iter+2 << endl;

   cout<<"Elemen-elemen dari vektor V2 adalah sebagai berikut:\n ";
   for (int i =0;i< 6; i++)
      V2.push_back(i*i);	//menciptakan vektor V2

   iter = V2.begin();		//iterator untuk V2

   while ( iter != V2.end())
   {
      cout <<*iter <<" ";
      iter++;
   }

   cout<<endl;
   return 0;
}