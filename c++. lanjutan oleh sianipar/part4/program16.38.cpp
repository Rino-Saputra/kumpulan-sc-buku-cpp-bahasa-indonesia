#include<iostream>
#include<algorithm>
#include<functional>
#include <vector>
using namespace std;

vector <int> V;

int main()
{
   int S[] = {5, 6, 8, 7, 8, 3, 8, 10, 8, 12};

   for (int i =0 ; i<10;i++)
      V.push_back (S[i]);

   vector<int>:: iterator iter;
   for (iter= V.begin(); iter <V.end(); iter++)
      cout<< *iter<<" ";
   cout<<endl;

   replace (V.begin(), V.end(), 8, 9); // mengganti 8 dengan 9

   for (iter= V.begin(); iter <V.end(); iter++)
      cout<< *iter<<" ";
   cout<<endl;

   replace_if(V.begin(), V.end(), bind2nd(less<int>(),9), 5);
   //mengganti elemen-elemen yang kurang dari 9 dengan 5
   
   cout<<"Vektor baru setelah dua kali penggantian:"<<endl;
   for (iter= V.begin(); iter <V.end(); iter++)
      cout<< *iter<<" ";
   cout<<endl;
   
   return 0;
}