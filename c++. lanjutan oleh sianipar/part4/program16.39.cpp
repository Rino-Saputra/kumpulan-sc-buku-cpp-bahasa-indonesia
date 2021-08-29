#include <iostream>
#include<algorithm>
using namespace std;

void main()
{
   char A[] = "ABCDEFGH";

   int n = strlen(A);
   reverse(A, A+n);
   
   cout<<A<<endl;
}