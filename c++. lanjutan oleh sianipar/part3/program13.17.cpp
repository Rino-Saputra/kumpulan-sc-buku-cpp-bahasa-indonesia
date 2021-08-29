#include<iostream>
#include<list>
using namespace std;

list <char> L1; // declaration of list

void main()
{
   for (int i=0; i<26;i++)
      L1.push_back(90 - i ); //konstruksi list

   list<char>::iterator T;

   cout<<"List awal adalah: "<<endl;
   for ( T = L1.begin(); T!=L1.end(); T++)
      cout <<" " <<*T ; //statemen keluaran
   cout<<"\n\n";

   L1.sort() ; //untuk mengurutkan
   
   {
      list<char> ::iterator IT;
      cout<<"List terurut adalah: "<<endl;
      for ( IT = L1.begin(); IT!=L1.end(); IT++)
         cout<<" " <<*IT ; //statemen keluaran setelah pengurutan
   }
   cout<<endl;
}