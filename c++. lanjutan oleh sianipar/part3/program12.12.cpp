#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

bool Ganjil(int n) //definisi dari fungsi untuk nilai-nilai ganjil
{
   return n%2 ? true : false;
}

bool Genap(int m ) //definisi dari fungsi untuk nilai-nilai genap
{
   return !(m%2) ? true: false;
}

int main()
{
   int S[] = {5, 6, 8, 7, 4, 3, 8, 10, 11, 12};
   int n = count_if(S, S+10, Genap);

   /*count_if() adalah sebuah algoritma. Genap adalah alamat dari
     (pointer yang menunjuk ke) fungsi Genap(). Fungsi count_if diimplementasikan
	 jika elemen memenuhi fungsi Genap*/

   cout<<"Jumlah elemen genap pada S adalah = "<<n<<endl;

   int K = count_if(S, S+10, Ganjil);
   /*Ganjil adalah alamat dari
     (pointer yang menunjuk ke) fungsi Ganjil(). Fungsi count_if diimplementasikan
	 jika elemen memenuhi fungsi Ganjil*/

   cout<<"Jumlah elemen ganjil pada S adalah = "<<K<<endl;

   return 0;
}