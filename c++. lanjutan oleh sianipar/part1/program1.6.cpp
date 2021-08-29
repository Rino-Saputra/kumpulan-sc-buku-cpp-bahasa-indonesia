#include <iostream>
using namespace std;

int main()
{
   double jum = 0 , rerata = 0;
   double Harga[5] ;

   cout<<"Masukkan elemen-elemen dari array Harga: "<<endl;
   for (int i =0; i<5; i++)
      cin>>Harga[i];

   int ukuran = sizeof(Harga)/sizeof(double);
   //ukuran adalah jumlah elemen di dalam array
   cout<<"Ukuran array = "<<ukuran<<endl;
   for (int j =0; j<ukuran ; j++)	//menggunakan ukuran
      jum += Harga[j];

   cout<<"Berikut adalah isi dari array Harga: ";
   for(int k =0;k<ukuran;k++)			//menggunakan ukuran
      cout<<Harga[k]<<" ";

   cout<<"\nJumlah sampel = "<<ukuran<<endl;
   cout<<"jum = " <<jum <<endl;
   cout<<"Rerata harga = "<< jum/ukuran<<endl;

   return 0;
}