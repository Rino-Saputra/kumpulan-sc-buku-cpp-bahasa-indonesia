#include<iostream>
using namespace std;

int fung1(int);		//prototipe fungsi dari fung1
int fung2(int) ;	//prototipe fungsi dari fung2
int fung3(int);		//prototipe fungsi dari fung3

int main()
{
   int P;
   int (*F[3])(int)={fung1, fung2, fung3}; //array yang memuat tiga pointer
   //inisialisasi dilakukan menggunakan nama-nama fungsi

   cout<<"Masukkan sebuah nilai: ";
   cin>>P;
   
   cout<<"Anda telah memasukkan nilai: "<<P<<endl;

   for(int i=0;i<3;i++) //loop for untuk memanggil fungsi-fungsi yang berbeda
      cout<<"Pangkat "<<i+1<<" dari nilai "<<P<<" = "<<(*F[i])(P)<<endl;

   return 0;
}

int fung1(int a) //definisi dari fung1
{
   return a; 
}

int fung2(int a) //definisi dari fung2
{
   return a*a; 
}

int fung3(int a) //definisi dari fung3
{
   return a*a*a;
}