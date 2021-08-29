#include<iostream>
using namespace std;

class Vektor
{
   protected:
      int x, y, z ; //tiga komponen vektor

   public:
      Vektor (){ x=1,y=2,z=3;}
      Vektor (int a, int b,int c) 
	  { 
         x =a ; y = b; z =c;
         cout<<"Konstruktor dari kelas Vektor dipanggil."<<endl;
	  }

	  Vektor operator += (const Vektor & P)
	  {
         x = x + P.x ;
         y = y + P.y ;
         z = z + P.z ;
         cout<<"Fungsi terbebani dari Vektor dipanggil."<<endl;
         return *this;
	  }

      void Tampil() 
	  {
         cout<<"Komponen x = "<<x<<endl;
         cout<<"Komponen y = "<<y<<endl;
         cout<<"Komponen z = "<<z<<endl;
	  }
}; //akhir dari kelas Vektor

class D : public Vektor
{
   public:
      // constructor function
      D (int a, int b, int c) : Vektor (a,b,c) 
	  {
         cout<<"Konstruktor dari D dipanggil."<<endl;
	  }
}; //akhir dari kelas D


int main()
{
   D V1(12, 4, 6), V2(3, 5, 7);

   V1 += V2;
   V1.Tampil();

   return 0;
}