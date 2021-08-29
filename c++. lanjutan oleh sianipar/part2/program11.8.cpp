#include<iostream>
using namespace std;

#define maks(x,y) (x >y ? x : y)		//definisi makro

int main()
{
   float x,y;
   char ch, kh;
   int A, B;

   cout<<"Masukkan dua nilai integer: "; cin>>A>>B;
   cout<<"Masukkan dua nilai titik mengambang: "; cin>>x>>y;
   cout<<"Masukkan dua karakter: "; cin>>ch>>kh;

   cout<<"Terbesar dari dua int = "<<maks(A, B)<< endl;
   cout<<"Terbesar dari dua float = "<<maks(x, y)<<endl;
   cout<<"Terbesar dari dua char = "<<maks(ch, kh)<<endl;

   return 0;
}