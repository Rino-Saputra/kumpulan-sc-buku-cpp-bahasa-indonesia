#include<iostream>
using namespace std;

void FungsiSpesifikasi(int j) throw (int, double, char)
{
   if (j == 1)
      throw j;
   if (j ==2)
      throw 0.6;
   if (j == 3)
      throw 'H';
}

int main ()
{
   try
   {
      int A (4);

	  if (A != 3)
         FungsiSpesifikasi(1);
   }

   catch (int) //blok penanganan eksepsi diawali di sini
   { 
      cout<<"Ekspesi pada int ditangkap"<<endl;
   }

   try { //blok try
      double B (6.6);

      if (B!=7)
         FungsiSpesifikasi(2);
   }

   catch (double) //blok penanganan eksepsi diawali di sini
   { 
      cout<<"Ekspesi pada double ditangkap"<<endl;
   }

   try {
      char ch = 'C';

      if (ch != 'H')
         FungsiSpesifikasi(3);
   }

   catch(char)
   { 
      cout<<"Ekspesi pada char ditangkap"<<endl;
   }

   return 0;
}