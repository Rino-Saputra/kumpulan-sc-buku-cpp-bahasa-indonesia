#include <iostream>
using namespace std;

int main()
{
   float B[4] = {2.5 ,3.4 ,6.0,12.2};
   float C[4] = {4.0,2.0,3.6,6.4};

   float R[4];
   double S[4], a, b, c, d, jum =0;
 
   a = B[2] + C[3];
   b = B[3] - C[1];

   c = B[2] * C[1];
   d = (B[3]+C[2]) /(C[1]*B[1]);

   cout<<"a = "<<a<<",\tb = "<<b<<"\n";
   cout<<"c = "<<c<< ",\t\td = "<<d<<"\n";

   for (int i=0;i<=3;i++)
   {
      S[i] = B[i] / C[i];
      R[i] = B[i] * C[i];
      cout<<"S["<<i<<"] = "<<S[i]<<",\tR["<<i<<"] = "<<R[i]<<endl; 
   }

   for (i=0;i<=3;i++)
      jum += (B[i] +C[i]);

   cout<<"Penjumlahan atas elemen-elemen array B dan C = "<<jum<<endl;

   return 0;
}