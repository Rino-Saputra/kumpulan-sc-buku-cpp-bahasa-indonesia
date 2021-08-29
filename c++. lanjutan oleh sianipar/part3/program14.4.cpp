#include<iostream>
using namespace std;
#include <string>
#include <set>

const int n =4;

int main()
{
   string Str[n] = {"Satu","Dua", "Tiga", "Empat" };
   char ch[n] = {'B', 'C', 'A', 'V'} ; // Array char

   set<string> S1 ( Str, Str+n);
   set<char> S2 (ch, ch+n) ;

   cout <<"Ukuran dari S1 = "<<S1.size()<<endl ;
   cout <<"Ukuran dari S2 = "<<S2.size()<<endl;

   cout <<"Elemen-elemen dari S1 adalah: ";
   set<string> :: iterator iter;
   for (iter = S1.begin(); iter != S1.end(); iter++)
      cout<<*iter <<" ";

   cout<<"\nSetelah pernghapusan, elemen-elemen dari S1 adalah: ";
   S1.erase( S1.begin());   //menghapus elemen pertama
   for (iter = S1.begin(); iter != S1.end(); iter++)
      cout<<*iter <<" ";

   set<char> :: iterator itr;
   cout<<"\nElemen-elemen dari S2 adalah: ";
   for (itr = S2.begin(); itr != S2.end(); itr++)
      cout<<*itr <<" ";

   S2.clear();
   if(S2.empty())
      cout<<"\nS2 kosong."<<endl ;

   return 0;
}