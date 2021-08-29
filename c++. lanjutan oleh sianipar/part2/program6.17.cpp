#include <iostream>
using namespace std;

void Fungsi1()
{ 
   cout<<"Ini adalah fungsi void dengan argumen void.\n";
}

void Fungsi2(int m, int n)
{ 
   cout<<"Ini adalah fungsi void dengan dua argumen.\n";
}

int Fungsi3 (int x, int y)
{
   return x*y;
}

int main()
{ 
   int x = 65;
   
   int * px = &x;			//px adalah pointer yang menunjuk ke int x
   typedef void (*PF)();	//typedef atas pointer ke fungsi void

   PF fungsi1 = (PF)Fungsi1;	//menggunakan konversi konvensional
   fungsi1() ;					//pemanggilan fungsi

   PF fungsi2 = reinterpret_cast<PF>(Fungsi1);	//oleh reinterpret_cast
   fungsi2();					// fungsi2 dipanggil

   int y = 2;
   PF aFungsi2 = reinterpret_cast<PF>(Fungsi2);
   aFungsi2();

   typedef int(*pF)(int, int);	//definisi tipe atas pointer yang menunjuk ke
								//fungsi-fungsi int yag memiliki dua parameter int
   pF fungsi3 = (pF) Fungsi3 ;	//konversi konvensional dari bahasa C
   cout<<fungsi3(x,y )<<endl;	//pemanggilan fungsi

   //berikut adalah konversi yang sama menggunakan reinterpret_cast<>()
   pF fungsi4 = reinterpret_cast<pF>(Fungsi3);
   cout<< fungsi4(x,y)<< endl;

   return 0;
}