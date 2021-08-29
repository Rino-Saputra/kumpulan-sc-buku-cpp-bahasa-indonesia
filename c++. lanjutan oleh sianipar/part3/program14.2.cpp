#include<iostream>
using namespace std;
#include <set>

int main()
{ 
   int G[8] = {100, 78, 34, 34, 34, 20, 104, 78 };

   set <int> S1(G, G+8) ; //Elemen-elemen G sampai G+8 dimasukkan
   set <int> S2(G, G+5) ; //Elemen-elemen G sampai G+5 dimasukkan

   cout <<"Ukuran dari S1 = "<<S1.size()<<endl ;
   cout <<"Ukuran dari S2 = "<<S2.size()<<endl;

   cout<<"Jumlah elemen dengan nilai 34 = "<<S1.count(34)<<endl;
   cout<<"Lower_bound dari 35 di dalam S1 = "<< *(S1.lower_bound(35))<<endl;

   cout <<"Elemen-elemen dari S1 adalah: ";
   set<int> :: iterator iter;
   for (iter = S1.begin(); iter != S1.end(); iter++)
      cout<<*iter <<" ";

   cout<<"\nElemen-elemen S2 adalah: ";
   for (iter = S2.begin(); iter != S2.end(); iter++)
      cout<<*iter <<" ";

   S2.swap(S1); //menukas S2 dengan S1
   cout <<"\nSetelah penukasan\n";
   cout <<"Elemen-elemen dari S1 adalah: ";
   for ( iter = S1.begin(); iter != S1.end(); iter++)
      cout<<*iter <<" ";

   cout<<"Elemen-elemen dari S2 adalah: ";
   for ( iter = S2.begin(); iter != S2.end(); iter++)
      cout<<*iter <<" ";

   S2.clear();
   if (S2.empty())  //menguji apakah masih ada elemen di dalam set.
      cout<<"\nSetelah operasi clear(), S2 menjadi kosong.\n";

   return 0;
}