#include<iostream>
#include<vector>
# include <iterator>
using namespace std;

vector<int> V;  //Deklarasi dari sebuah vektor dengan elemen-elemen int

int main()
{
   cout<<"Masukkan 5 integer: "<<endl;
   int hitung =0;
   while (hitung <=4)
   {
      istream_iterator <int> readit(cin); //input iterator
      V.push_back (*readit);
      ++hitung;
   }

   //Vektor dikonstruksi dengan menempatkan elemen-elemen di belakang vektor.
   cout<<"\nElemen-elemen dari V adalah: ";
   vector<int>:: iterator iter = V.begin(); // iterator didefinisikan
   //iter adalah nama iterator, yang akan dipakai untuk menjelajah vektor

   while(iter != V.end())
   {
      cout<< *iter <<" ";
      iter++;
   }

   return 0;
}