#include<iostream>
#include<deque>
using namespace std;
deque<int> Q1, Q3;
deque<char> Q2;

int main()
{
   for (int i =0; i<4;i++)
   {
      Q1.push_back (i*i);
      Q2.push_back (65 +i);
   }

   Q3 = Q1; //Q1 ditugaskan kepada Q3

   Q3.push_front(20);
   Q3.push_back(20*20);

   for (int j = 0; j<4; j++)
      cout <<Q1[j]<<"\t"<<Q2[j] <<endl;

   cout<<"\nUkuran dari Q3 = "<<Q3.size()<<endl;
   cout <<"Elemen-elemen dari Q3 adalah: ";

   deque<int>:: iterator iter;

   for (iter = Q3.begin(); iter < Q3.end(); iter++)
      cout<< *iter <<" ";

   return 0;
}