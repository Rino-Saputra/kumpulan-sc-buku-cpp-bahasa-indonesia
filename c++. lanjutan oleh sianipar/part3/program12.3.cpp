#include<iostream>
#include<deque>
#include <iterator>
using namespace std;

deque<int> Dek; //deklarasi deque dengan elemene-elemen int

int main()
{
   cout<<"Masukkan 4 buah integer: "<<endl;

   int hitung =0;
   while (hitung < 4)
   { 
      istream_iterator <int> readit(cin);
      Dek.push_back (*readit);
      ++hitung; 
   }

   int k=0;
   cout<<"\nElemen-elemen dari Dek adalah: ";
   while (k <4)
   {
      ostream_iterator <int> writeit(cout);
      * writeit= * (Dek.begin()+k );
      cout<<" ";
      k++;
   }

   return 0;
}