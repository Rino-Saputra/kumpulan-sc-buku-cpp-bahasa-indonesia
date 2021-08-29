#include<iostream>
#include<algorithm>
using namespace std;

void main()
{
   int S1[] = {11, 12, 19, 13, 16, 20, 24, 22};
   int S2[] = {1, 2, 3, 4, 5, 6, 7, 8};

   cout<<"S1= ";
   swap_ranges(S1, S1+4, S2+4);
   for ( int j =0; j<8; j++)
      cout<<S1[j]<<" ";

   cout<<"\nS2= ";
   for ( int k =0; k<8; k++)
      cout<<S2[k]<<" ";
   cout<<endl;
}