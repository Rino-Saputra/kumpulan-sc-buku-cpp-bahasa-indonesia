#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int S[12] = {10, 24, 12, 22, 34, 51, 171, 13, 16, 176, 56, 42};

   partial_sort(S, S+6, S+12); // mengurutkan sampai s+6

   for ( int i =0; i<12; i++)
      cout << S[i] <<" ";
   cout<<"\n";

   return 0; 
}