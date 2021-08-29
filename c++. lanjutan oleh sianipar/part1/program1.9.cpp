#include <iostream>
using namespace std;
int main()
{
   int Angka[4], angka[5];		//kedua array bertipe int
   char NamaKu[7];

   cout<<"Tuliskan nilai-nilai untuk array Angka: ";
   for (int i = 0; i<4; i++)
      cin>>Angka[i];

   cout<<"Tuliskan nilai-nilai untuk array angka: ";
   for (int k = 0; k<5; k++)
      cin>>angka[k];

   cout<<"Tuliskan nilai-nilai untuk array NamaKu: ";
   for (int n = 0; n<7; n++)
      cin>>NamaKu[n];

   cout<<"Elemen-elemen array Angka adalah: ";
   for (int j=0;j<4;j++)
      cout<<Angka[j]<<" ";

   cout<<"\n" ;

   cout<<"Elemen-elemen array angka adalah: ";
   for (int m=0;m<5;m++)
      cout<<angka[m]<<" " ;

   cout<<"\n ";

   cout<<"NamaKu adalah: ";
   for (int p=0;p<7;p++)
      cout<<NamaKu[p];

   cout<<"\n";

   return 0; 
}