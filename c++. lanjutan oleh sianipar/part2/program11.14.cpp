#include<iostream>
#include<cassert>
using namespace std;

void main()
{
   int A, B;
   cout<<"Masukkan dua integer: "; 
   cin>>A>>B;

   assert(B>0);

   double C = A/B;

   cout <<"C = "<<C<<endl;
}