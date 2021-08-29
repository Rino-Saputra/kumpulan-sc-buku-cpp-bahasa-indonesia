#include <iostream>
#include<algorithm>
using namespace std;

void main()
{   
   char A[7] = "ABCDEF";

   for(int k = 0; k<5; k++)
   {
      random_shuffle(A, A+6);
      cout<<A<<" ";
   }
   cout<<"\n";
}