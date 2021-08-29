#include <iostream>
using namespace std;

class Vektor
{
   private:
      int x, y, z ;		//tiga komponen Vektor

   public:
      void set_nilai(int a, int b, int c) {x =a; y = b; z = c;}

      void operator += (Vektor P) //definisi dari fungsi pembebanan operator
	  { 
         x = x + P.x ; 
         y = y + P.y ;
         z = z + P.z ; 
	  }

      operator -= ( Vektor P) //definisi dari fungsi pembebanan operator
	  {
         x = x - P.x; 
         y = y - P.y;
         z = z - P.z; 
	  }

      void Tampil()
	  {cout<<"x = "<<x<<"\ty = "<<y<<"\tz = "<<z<<endl;}
}; //akhir dari kelas Vektor

int main()
{ 
   Vektor V1, V2, V3;

   V1.set_nilai(12, 4, 6);
   V2.set_nilai(2, 5, 7);
   V3.set_nilai(4, 5, 6);

   V1 += V2;
   V3 -= V2;

   cout<<"Komponen-komponen dari V1 adalah: ";
   V1.Tampil() ;
   
   cout<<"Komponen-komponen dari V3 adalah: ";
   V3.Tampil();
   
   cout<<"Komponen-komponen dari V2 adalah: ";

   V2.Tampil();
   return 0;
}