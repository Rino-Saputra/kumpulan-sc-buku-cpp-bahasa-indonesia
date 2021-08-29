#include<iostream>
using namespace std;
#include <set>
#include <iterator>
typedef std::set<char> Chrset;  //typedef untuk menghindari
								//penulisan std::set< char> berulangkali

int main()
{
   const int n =4;
   char G[n] = {'Z', 'S', 'N', 'A'};

   Chrset Set1 (G , G+n); //konstruksi dari set
   Chrset Set2 (Set1);

   Chrset:: iterator itr; //deklarasi dari iterator

   cout<<"Elemen-elemen Set1 adalah: ";
   for(itr = Set1.begin(); itr!= Set1.end(); itr++)
      cout<< *itr<<" ";
   cout<<"\n";

   cout<<"Elemen-elemen Set2 adalah: ";
   for(itr = Set2.begin(); itr != Set2.end(); itr++)
      cout<< *itr<<" ";

   Set1.erase( Set1.begin()); //menghapus elemen pertama
   cout<<"\n";

   Chrset:: iterator iter;
   
   Set1.insert('T'); //penyisipan sebuah elemen

   cout<<"Setelah penyisipan, elemen-elemen S1 adalah: ";
   for(iter = Set1.begin(); iter!= Set1.end(); iter++)
      cout<< *iter<<" ";
   cout<<"\n";
   
   return 0;
}