#include <iostream>
#include<algorithm>
using namespace std;

void main()
{
   char A[4] = "XYZ";

   for( int k =0; k<6;k++)
   { 
      next_permutation (A, A+3);
      cout<<A<<" ";
   }
   cout<<"\n";

   for( int i =0; i<6;i++)
   {
      prev_permutation (A, A+3);
      cout<<A<<" ";
   }
   cout<<"\n";
}