#include<iostream>
using namespace std;

class Basis		//kelas Basis didefinisikan
{ };

int main()
{ 
   Basis obj_basis ; //obj_basis adalah objek dari kelas Basis

   int A;
   double B, D;
   char ch = 'C';

   cout<<"Masukkan dua nilai: ";
   cin>> A>>B;

   try //blok try
   {
      if(B == 0.0)
         throw obj_basis; //melempar sebuah objek dari kelas Basis
      else
	  { 
         D = A/B ;
         cout<<"D = "<<D<<endl; 
	  }
   } //akhir dari blok try

   catch (int) //blok penanganan eksepsi untuk int
   { 
      cout<<"Eksepsi tipe \"int\" ditangkap."<<endl; 
   }

   catch(Basis) //blok penanganan eksepsi untuk kelas Basis
   { 
      cout<<"Eksepsi tipe \"Basis\" ditangkap."<<endl;
   }

   return 0;
}