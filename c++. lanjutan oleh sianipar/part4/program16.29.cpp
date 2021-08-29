#include <iostream>
#include<algorithm>
using namespace std;

void main()
{
   char A[5] = "XYZ";

   for( int k =0; k<6;k++)
   { 
      next_permutation(A, A+3);
      cout<<A<<" ";
   }
   cout<<"\n";
}