#include<iostream>
using namespace std;

#define lebar 40
   #define luas (panjang*lebar)
#if 0
   #if panjang > 2*lebar
   #undef lebar			//membuang definisi sebelumnya dari lebar
   #define lebar panjang/2
#elif panjang < lebar	//sama dengan else if
#endif
#undef lebar
#define lebar panjang/4 //pendefinisian-ulang. Tidak ada semikolon di akhir
#endif

int main()
{ 
   int panjang ;

   cout<<"Tuliskan panjang dari sebuah persegi-panjang: ";
   cin>>panjang;

   cout<<"panjang = "<<panjang<<"\t lebar = "<<lebar<<endl;
   cout<<"luas = "<<luas<<endl;

   return 0; 
}