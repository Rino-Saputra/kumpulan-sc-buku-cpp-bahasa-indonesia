#include<iostream>
using namespace std;
#include <set>
#include <iterator>

const int n = 8,m = 5;

int main()
{ 
   char ch [m] = {'A', 'D', 'E', 'C', 'B'};
   int AR1[n] = { 65, 72, 67, 69, 71, 68, 66, 70 };

   set<int> Set1( AR1, AR1+7);		//set dikonstruksi dengan sebuah array
   set<char> Set3(ch, ch+5);		//set dikonstruksi dengan sebuah array
   set<int> Set2 (Set1);			//Set2 dikonstruksi sebagai salinan dari Set1
   set<int>:: iterator itr;			//deklarasi dari iterator untuk int set

   cout<<"Elemen-elemen Set1 adalah: ";
   //berikut adalah statemen keluaran untuk set1
   for( itr = Set1.begin(); itr!= Set1.end(); itr++)
      cout<< *itr<<" ";
   cout<<endl;

   cout<<"Elemen-elemen Set2 adalah: ";
   //berikut adalah statemen keluaran untuk set2
   for( itr = Set2.begin(); itr!= Set2.end(); itr++)
      cout<< *itr<<" ";
   cout<<endl;

   cout<<"Elemen-elemen Set3 adalah: ";
   set<char>:: iterator iter;	//deklarasi dari iterator
   for( iter = Set3.begin(); iter!= Set3.end(); iter++)
      cout<< *iter<<" "; // statemen keluaran untuk set3
   cout<<endl;

   return 0;
}