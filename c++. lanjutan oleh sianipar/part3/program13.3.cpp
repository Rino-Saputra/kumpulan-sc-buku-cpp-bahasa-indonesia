#include<iostream>
#include<vector>
#include <string>
using namespace std;

vector<int> V1, V2, V3, V4;
vector<string> V5;

int main()
{
   V1.assign(5,5); //V1 is assigned 5 values each equal to 5.
   V2.assign(5,4); //V2 is assigned 5 values each equal to 4.

   V3 = V2; // vector V2 is assigned to vector V3

   string Str [] = {"Nimi" ,"Simi", "Jimmi", "Ginni", "Pinni"};

   int Array[] = {1, 2, 3, 4, 5};

   for (int j =0; j<5 ;j++)
   {
      V4.push_back (Array[j]);
      V5.push_back (Str[j]);
   }
   //elemen-elemen dari array Str ditempatkan ke vektor V5

   if(V2 == V3)
   {
      cout<<"V2 dan V3 sama"<<endl;
   }
   else
      cout<<" V2 dan V3 tidak sama"<<endl;

   cout<<"V1 \tV2 \tV3 \tV4 \t V5"<<endl ;
   for ( int i = 0; i< 5; i++)
      cout<<V1[i]<<"\t"<<V2[i]<<"\t"<<V3[i]<<"\t"<<V4[i]<<"\t"<<V5[i]<<endl;

   cout<<"Alamat dari V3 = "<<&V3<<endl ;
   for (int k=0;k< 5 ;k++)
      V2[k] *= V1[k] ;

   cout<<"Komponen-komponen dari V2 sekarang = ";
   for (int m =0; m<5; m++)
      cout<<V2.at(m) <<" ";

   cout<<"\n";
   return 0;
}