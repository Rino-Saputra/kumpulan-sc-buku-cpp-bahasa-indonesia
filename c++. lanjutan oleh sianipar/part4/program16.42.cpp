#include<iostream>
# include<algorithm>
using namespace std;

int main()
{
   int S1[] = {11, 12, 19, 13, 16, 20, 24, 22};

   sort(S1, S1+8);

   for (int i =0; i<8; i++)
      cout <<S1[i]<<" ";
   cout<<"\n";

   return 0 ;
}