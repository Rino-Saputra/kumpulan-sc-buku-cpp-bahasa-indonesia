#include <iostream>
using namespace std;

double Perkalian (double [], double[], size_t, size_t);
//prototipe fungsi

int main()
{ 
   int n =4, m=4;
   double angka[4];
   double Nilai[4];

   cout <<"Masukkan 4 buah nilai desimal untuk array angka: ";
   for(int i=0;i<4;i++)
      cin>> angka[i];

   cout<<"\nMasukkan 4 nilai desimal untuk array Nilai: ";
   for(int j=0;j<4;j++)
      cin>>Nilai[j]; //membaca elemen-elemen array

   cout<<"Anda telah memasukkan nilai-nilai berikut untuk array angka: "<<endl;
   for(int k=0;k<4;k++)
      cout<< angka[k]<<" ";

   cout<<"\nAnda telah memasukkan nilai-nilai berikut untuk array Nilai: "<<endl;
   for(int s=0;s<4;s++)
      cout<<Nilai[s]<<" ";

   cout<<"\nPenjumlahan atas perkalian dari elemen-elemen array = "
	   <<Perkalian(angka, Nilai, n, m)<< endl;

   return 0;
}

double Perkalian(double angka[], double Nilai[], size_t n, size_t m)
{
   double Perkalian[] ={0, 0, 0, 0};
   double Total = 0;

   for (n =0; n<4; n++)
   {
      Perkalian[n]= angka[n] * Nilai[n];
      Total += Perkalian[n]; 
   }

   return Total;
}