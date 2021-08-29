#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int S[13] = {10, 12, 22, 24, 34, 51, 71, 13, 16, 177, 106, 6, 7};

   make_heap(S, S+13);

   for ( int i =0; i<13; i++)
      cout << S[i] <<" ";
   cout<<"\n";

   return 0;
}