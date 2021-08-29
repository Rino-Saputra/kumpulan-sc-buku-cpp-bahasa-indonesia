#include<iostream>
#include<numeric>
using namespace std;

int main()
{
   int S[8] = {2, 3, 4, 5, 6, 7, 8, 9};
   int A[8];

   cout<< "S = ";
   for (int i = 0; i<8; i++)
      cout << S[i] <<" ";

   partial_sum(S, S+8, A);

   cout<<"\nA = ";
   for (int k =0; k<8; k++)
      cout << A[k] <<" ";

   cout<<"\n";
   return 0 ;
}