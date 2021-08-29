#include<iostream>
# include<algorithm>
using namespace std;

int main()
{ 
   int S1[] = {10, 12, 40};
   int S2[] = {34, 51, 71, 106, 177};
   int A[8];
   int B[6];

   merge(S1, S1+3, S2, S2+5, A);

   for (int i =0; i<8 ;i++)
      cout<< A[i]<<" ";
   cout<<"\n";

   merge(S2, S2+4, S1, S1+2, B);

   for (int k =0; k<6 ;k++)
      cout<< B[k]<<" ";
   cout<<"\n";

   return 0 ;
}