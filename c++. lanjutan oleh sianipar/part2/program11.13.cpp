#include<iostream>
using namespace std;

#define luas (panjang*lebar)
#define panjang 100
#if (panjang>50)
   #error 1- Tidak sesuai dengan rencana
#else
#endif

int main()
{
   int lebar;

   cout<<"Tuliskan lebar dari persegi-panjang: ";
   cin>>lebar;

   cout<<"luas= "<<lebar*panjang<<endl;

   return 0;
}