#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int m,n,p ;
   double jum = 0, rerata = 0, sigma = 0;

   int Cuplik[] = {20, 16, 10, 15, 11, 12, 15, 22, 14, 13, 14};

   m = sizeof(Cuplik[1]);	//menghasilkan jumlah byte untuk satu elemen
   p = sizeof(Cuplik);
   //p adalah jumlah total byte yang digunakan untuk array.

   n = p/m;
   //n = jumlah elemen di dalam array.

   for(int i=0;i<=(n-1);i++)
      jum += Cuplik[i]; //menghitung penjumlahan dari semua elemen

   rerata = jum/n;

   double var =0;
   for (int j = 0; j<n; j++)
      var += ((Cuplik[j]-rerata)*(Cuplik[j]-rerata));

   sigma = sqrt(var/(n-1));
   //sigma adalah deviasi standar

   cout<<"Penjumlahan semua elemen = "<<jum<<"\nBanyaknya elemen = "<<n <<endl;
   cout<<"Rerata array = "<<rerata <<endl;

   cout<<"Variansi = "<<var <<endl;
   cout<<"Deviasi standar dari array = "<< sigma<<endl;

   return 0;
}