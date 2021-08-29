#include <iostream>
using namespace std;

int main()
{ 
   int Angka[4] = {20, 30, 10, 15}; //deklarasi dan inisialisasi

   double Harga[5] = { 5.6, 8.3, 7.0, 6.3,7.8 };

   cout<<"Angka[0] = "<<Angka[0]<<", Angka[1] = "<<Angka[1]<<endl;
   cout<<"Angka[2] = "<<Angka[2]<<", Angka[3] = "<<Angka[3]<<"\n\n";

   for (int i =0; i<5; i++ ) //loop for untuk menampilkan elemen-elemen array Harga
      cout<<Harga [i]<<" ";

   return 0;
}