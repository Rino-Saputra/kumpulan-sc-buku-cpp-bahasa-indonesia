#include <iostream>
using namespace std;

double Rerata (double[], size_t ); //prototipe fungsi

int main()
{
   int n=10;
   double angka[10];

   cout<<"Masukkan 10 nilai titik-mengambang: ";
   for(int i=0;i<10;i++)
      cin>>angka[i]; //masukkan elemen-elemen array

   cout<<"Anda telah memasukkan nilai-nilai berikut: "<<endl;
   for(int j=0;j<10;j++)
      cout<< angka[j]<<" ";

   cout<<"\n Rerata = "<<Rerata(angka,n)<< endl;

   return 0;
}

double Rerata(double angka[], size_t n)
// definisi fungsi
{ 
   double Total = 0;

   for (int i =0; i<n; i++)
      Total += angka[i];

   return Total / n;
}