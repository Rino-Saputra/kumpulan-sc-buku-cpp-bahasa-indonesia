#include<iostream>
#include<cmath>
using namespace std;

int F1(int x)
{
   return pow(x,2);
}

double F2(int n)
{
   return sqrt(n);
}

main()
{
   int A[4] = { 2,3,4,5};
   int B[4];
   double S[4];

   for(int i=0;i<=3;i++)
   {
      B[i] = F1(A[i]);
      S[i] = F2(A[i]);
      cout<<"A["<<i<<"] = "<<A[i]<< "\tB["<<i<<"] = "<<B[i]<<",\tS["<<i<<"] = "<<S[i]<<"\n";
   }

   return 0;
}