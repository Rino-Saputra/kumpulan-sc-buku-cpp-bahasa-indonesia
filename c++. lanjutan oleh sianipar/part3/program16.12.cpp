#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{ 
   vector<int> V;
   int S[7] = { 10,20, 24 ,30, 35, 36, 70};

   for(int i =0; i < 7 ;i++)
      V.push_back (S[i]);

   int n = 24;
   vector <int> ::iterator iter;
   iter = find(V.begin(), V.end(), n);

   if (iter != V.end())
      cout <<"Nilai "<<n<<" adalah sebuah elemen dari vektor V."<<endl;
   else
      cout<<"Nilai "<< n<<"bukan elemen dari vektor V.\n";

   return 0 ;
}