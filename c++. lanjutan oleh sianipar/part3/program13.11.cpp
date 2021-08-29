#include<iostream>
#include<list>
using namespace std;

list<char> L1;
list<int> L2;
list<int> L3;

void main()
{
   int A[] = {78, 58, 90, 44, 33, 11};

   for (int i=0; i<6;i++)
   {
      L1.push_back(75 - i);
      L2.push_back (A[i]);
      L3. push_back(i*i);
   }

   cout<<"List awal adalah sebagai berikut: "<<endl;
   list<char>::iterator T1;
   list <int>::iterator T2;

   cout<<"List L1 = ";
   for ( T1 = L1.begin() ; T1!=L1.end() ; T1++ )
      cout <<" " <<*T1<<" " ;

   cout<<"\nList L2 = ";
   for ( T2 = L2.begin() ; T2!=L2.end() ; T2++ )
      cout <<" " <<*T2<<" " ;

   cout<<"\nList L3 = ";
   for ( T2 = L3.begin() ; T2!=L3.end() ; T2++ )
      cout <<" " <<*T2<<" " ;

   L3.sort();
   L2.sort();
   
   L2.swap(L3); //menukar elemen-elemen dari dua list
   cout<<"\nList terurut dan tertukar adalah sebagai berikut: "<<endl;
   cout<<"\nList L2 =" ;
   for ( T2 = L2.begin() ; T2!= L2.end() ; T2++)
      cout <<" "<<*T2<<" " ;

   cout<<"\nList L3 =" ;
   for ( T2 = L3.begin() ; T2!= L3.end() ; T2++)
      cout <<" "<<*T2<<" " ;
}