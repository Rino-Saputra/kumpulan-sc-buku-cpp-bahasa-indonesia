#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int S[10] = {10, 12, 22, 24, 34, 51, 171, 13, 16, 170};

   nth_element(S, S+4, S+10);

   for (int i =0; i<10; i++)
      cout << S[i] <<" ";
   cout<<"\n";

   return 0 ;
}