#include<iostream>
using namespace std;

#define luas ((panjang)*(lebar))
// the macro defines area of a rectangle.

int main()
{
   int panjang, lebar;

   cout<<"Tuliskan panjang dan lebar dari sebuah persegi-panjang: ";
   cin>>lebar>>panjang;

   cout<<"Luas = "<<luas<<endl;
   return 0;
}