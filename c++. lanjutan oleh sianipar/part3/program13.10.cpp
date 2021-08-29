#include<iostream>
#include<list>
using namespace std;

list<char> L1;

void main()
{
   for (int i=0; i<6;i++)
   { 
      L1.push_back(73 - i);
      L1.push_back(73 - i);
   }

   cout <<"List awal adalah sebagai berikut: "<<endl;
   list<char>::iterator T1;
   for ( T1 = L1.begin(); T1!=L1.end() ; T1++ )
      cout <<" " <<*T1 ;
   cout <<endl;

   L1.unique();		//menghapus salinan-salinan duplikat
   cout <<"Setelah penghapusan salinan duplikat, list menjadi: "<<endl;
   for ( T1 = L1.begin() ; T1!=L1.end() ; T1++ )
      cout <<" " <<*T1 ;

   L1.reverse();
   cout<<"\nSetelah pembalikan urutan, list menjadi: \n";
   for ( T1 = L1.begin() ; T1!=L1.end() ; T1++ )
      cout <<" " <<*T1 ;

   cout<<"\nSetelah penghapusan F, list menjadi: \n";
   L1.remove ('F');
   for ( T1 = L1.begin() ; T1!=L1.end() ; T1++ )
      cout <<" " <<*T1 ;
   cout <<endl;
}