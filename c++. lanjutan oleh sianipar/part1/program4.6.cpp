#include <iostream>
using namespace std;

class Vektor
{
   private:
      int x, y, z ; //tiga komponen Vektor

   public :
      Vektor(int a, int b,int c) {x =a; y = b; z =c;}
      Vektor (){}

      Vektor operator ++(int) //Operator postinkremen ++
	  { 
         x +=1;
         y += 1;
         z +=1;
         return Vektor((x-1), (y-1), (z-1));
	  }

      Vektor operator ++()	//Operator prainkremen ++
	  { 
         x +=1;
         y += 1;
         z +=1;
         return Vektor (x,y,z);
	  }

      Vektor operator --() //Operator pradekremen --
	  { 
         x -= 1;
         y -= 1;
         z -= 1;
         return Vektor (x,y,z);
	  }

      Vektor operator --(int) //Operator postdekremen --
	  { 
         x -= 1;
         y -= 1;
         z -=1;
         return Vektor((x+1), (y+1), (z+1));
	  }

      void Tampil()
	  { cout<<"x = "<<x<<", y = "<<y<<", z = "<<z<<endl;}
}; //akhir dari kelas B

int main()
{ 
   Vektor V1(4, 5, 6), V2(21, 22, 23), V3(1, 2, 3), V4(11, 12, 13);

   cout<<"Komponen-komponen awal dari V1 adalah: ";
   V1.Tampil();

   cout<<"Setelah postinkremen, komponen-komponen V1 adalah: ";
   (V1++).Tampil();

   cout<<"Sekarang komponen-komponen V1 adalah: ";
   V1.Tampil();

   cout<<"Komponen-komponen awal dari V2 adalah: ";
   V2.Tampil();

   cout<<"Setelah prainkremen, komponen-komponen V2 adalah: ";
   (++V2).Tampil () ;

   cout<<"Komponen-komponen awal dari V3 adalah: ";
   V3.Tampil();

   cout<<"Setelah postdekremen, komponen-komponen V3 adalah: ";
   (V3--).Tampil();

   cout<<"Sekarang komponen-komponen V3 adalah: " ;
   V3.Tampil();

   cout<<"Komponen-komponen awal dari V4 adalah: " ;
   V4.Tampil();

   cout<<"Setelah pradekremen, komponen-komponen V3 adalah: ";
   (--V4).Tampil () ;

   return 0;
}