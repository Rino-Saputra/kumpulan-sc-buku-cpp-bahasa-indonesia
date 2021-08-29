#include <iostream>
using namespace std;

int F1(int n){return n;}		//menghasilkan argumen
int F2( int n){return n*n;}		//menghasilkan kuadrat dari argumen
int F3(int n){return n*n*n;}	//menghasilkan pangkat tiga dari argumen
int F4(int n){return n*n*n*n;}	//menghasilkan pangkat empat dari argumen

int main()
{ 
   int m;
   int (*Fptr)(int m);	//pointer ke fungsi-fungsi tersebut

   cout<<"Tuliskan sebuah integer: ";
   cin>>m ;

   int pilihanUser ;	//user memilih fungsi
   cout<<"Berikan pilihan Anda antara 1 sampai 4: ";
   cin>>pilihanUser;

   switch (pilihanUser) 
   {
      case 1:
         Fptr = F1 ; //memilih fungsi F1
         cout<<m<<" dipangkatkan 1 = "<<F1(m)<<endl ;
         break;

      case 2:
         Fptr = F2 ; //memilih fungsi F2
         cout<<m<<" dipangkatkan 2 = "<<F2(m)<<endl;
         break;

      case 3:
         Fptr = F3 ; //memilih fungsi F3
         cout<<m<<" dipangkatkan 3 = "<< F3(m)<<endl;
         break;

      case 4:
         Fptr = F4 ; //memilih fungsi F4
         cout<<m<<" dipangkatkan 4 = "<< F4(m)<<endl;
         break;

      default:
         cout<<"Berikan pilihan kedua antara 1 sampai 4"<<endl;
   }

   return 0;
}