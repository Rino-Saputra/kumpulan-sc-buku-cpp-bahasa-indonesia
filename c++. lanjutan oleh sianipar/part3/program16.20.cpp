#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int S[8] = {2, 4, 5, 1, 3, 6, 7, 9};
   int A[8] = {12, 13, 14, 15, 5, 6, 7, 24};

   inplace_merge(S, S+3, S+8);
   inplace_merge(A, A+4, A+8);

   for(int i =0; i<8; i++)
	   cout << S[i] <<" ";
   cout<<"\n";

   for ( int j =0; j<8; j++)
      cout<< A [j] <<" ";
   cout<<"\n";

   return 0 ;
}