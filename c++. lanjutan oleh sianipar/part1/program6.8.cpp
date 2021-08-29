#include <iostream>
using namespace std;

class BangunBiasa {
   int sisi; //private secara default

   public:
      void set_sisi(int a)
	  { 
         sisi = a;
	  }

      int get_sisi() 
	  {
         return sisi;
	  }

      virtual double Luas (void) =0;
}; //akhir dari kelas BangunBiasa

class Lingkaran : public BangunBiasa
{
   public:
      double Luas (void)
	  {
         return (3.14159*get_sisi()*get_sisi()/4);
	  }
}; //akhir dari kelas Lingkaran

class Persegi : public BangunBiasa
{
   public:
      double Luas (void)
	  {
         return (get_sisi()*get_sisi());
	  }
}; //akhir dari kelas Persegi

int main ()
{ 
   double A1, A2;

   Persegi S1;
   Lingkaran C1;

   BangunBiasa* RS1 = & S1;
   BangunBiasa* RS2 = & C1;

   (*RS1).set_sisi(10);
   RS2 -> set_sisi(10);

   A1 = (*RS1).Luas(); //(*RS1).Luas() dan RS1 ->Luas() ekivalen
   A2 = RS2 -> Luas ();

   cout<<"A1 = "<<A1<<"\t A2 = "<<A2<<endl;

   return 0;
}