#include <iostream>
#include <list>
#include <string>
using namespace std;

list <int> L1, L2, L3 ; //mendeklarasikan tiga list bertipe int.
list <string> L4;		//mendeklarasikan list yang memuat string-string.

void main()
{
   for (int i=1; i<6;i++)
      L1.push_back(i*i );	//menempatkan nilai-nilai dengan push_back()

   L2.assign (5, 75);		//menempatkan nilai-nilai dengan assign()
   L3 = L1;					//konstruktsi list dengan penugasan

   const int n =5;
   string Nama[n]={"Kristof", "Santi","Dwi", "Vivian", "Rosintan"};

   for(int j=0; j<5; j++)
      L4.push_back(Nama[j]);

   //menempatkan nilai-nilai dalam bentuk string-string
   cout<<"List awal adalah sebagai berikut: "<<endl;
   cout<< "L1 = " ;
   list<int>::iterator itr ; //deklarasi dari iterator
   for(itr = L1.begin(); itr !=L1.end(); itr ++)
      cout<< *itr <<" ";
   cout<<"\n";

   cout<<"L2 = ";
   for(itr = L2.begin(); itr !=L2.end(); itr ++)
      cout<<*itr <<" ";

   L3 = L2;
   cout<<"\n";
   cout<<"L3 = ";
   for(itr = L3.begin(); itr !=L3.end(); itr ++)
      cout<<*itr<<" ";
   cout<<"\nL4 = ";

   list<string>::iterator iter ;
   for(iter = L4.begin(); iter !=L4.end(); iter ++)
      cout<< *iter <<" ";

   L3 = L1 ;		//L1 disalin ke L3
   cout<<"\nL3 baru = ";
   for(itr = L3.begin(); itr !=L3.end(); itr ++)
      cout<<*itr<<" ";

   if ( L1 == L3)	//perbandingan atas dua string
      cout<<"\nL1 dan L3 sama"<<endl;
   else
      cout<<"\nL1 dan L3 tidak sama\n";
}