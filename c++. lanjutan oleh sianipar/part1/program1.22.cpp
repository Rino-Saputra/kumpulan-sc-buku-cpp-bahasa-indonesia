#include<iostream>
using namespace std;

int main()
{
   int S[2][3] = {1, 2, 3, 4, 5, 6};
   int P[3][1] = {6, 5, 4};
   int C[2] = {0} ;

   for (int i = 0; i<2; i++)
      for (int j = 0; j<1; j++)
         for (int k = 0; k<3; k++)
		 { 
            C[i] += S[i][k] * P[k][j];
		 }

   for (int m = 0; m<2; m++)
      cout<<C[m] <<"\n";

   return 0;
}