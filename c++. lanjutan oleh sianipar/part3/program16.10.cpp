#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{ 
   vector<int> V;
   int S[8] = {10, 20, 24, 24, 24, 36, 70};

   for(int i =0; i < 6 ;i++)
      V.push_back (S[i]);

   int n = 24;
   pair <vector<int>::iterator, vector<int>::iterator> Rentang;
   Rentang = equal_range (V.begin(), V.end(), n);

   cout<<"Rentang sama diawali setelah "<<*( Rentang.first - 1) <<" dan berakhir sebelum "
       <<*(Rentang.second )<<endl;

   return 0 ;
}