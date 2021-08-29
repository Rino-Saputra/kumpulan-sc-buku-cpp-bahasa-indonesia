#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> V;
   int S[9] = {15, 20, 30, 40, 50, 60, 70, 80, 90};

   for(int i =0; i < 9; i++)
   V.push_back (S[i]);

   int m = 5;
   fill_n (V.begin(), V.size()/3 , m );

   for (int k =0; k<V.size(); k++)
      cout << V[k] << " ";
   cout<<"\n";

   int n = 10;
   fill ( V.begin(), V.end(), n );

   for (int j =0; j<V.size(); j++)
      cout << V[j] <<" ";

   cout<<"\n";
   return 0 ; 
}