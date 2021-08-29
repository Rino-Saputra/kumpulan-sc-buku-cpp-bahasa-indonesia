#include<iostream>
# include<algorithm>
using namespace std;

int main()
{ 
   int S[12] = {10, 24, 12, 22, 34, 51, 171, 115, 20, 176, 56, 42 };
   int A [6];

   partial_sort_copy (S, S+12, A, A+6);

   cout<<"S = ";
   for ( int i =0; i<12; i++)
      cout << S[i] <<" ";

   cout<<"\nA = ";
   for (int k =0; k<6; k++)
      cout << A[k] <<" ";

   cout<<"\n";
   return 0 ;
}