#include <iostream>
using namespace std;

class Bilangan{
   private:
      int x, y ;

   public:
      Bilangan (int a, int b ){ x = a ; y = b;} //konstruktor
      Bilangan(){}; //konstruktor default

	  Bilangan operator+(const Bilangan & m);	//prototipe fungsi

      void Tampil()
	  {
         cout<<"Komponen x = "<<x<<endl;
         cout<<"Komponen y = "<<y<<endl; 
	  }
}; //akhir dari kelas

Bilangan Bilangan :: operator+ (const Bilangan & m) //definisi fungsi
{ //di luar kelas
   x =x - m.x;
   y =y - m.y;

   return Bilangan (x,y); 
}

int main()
{
   Bilangan N(16, 21), M(5, 6), D, E; //N, M, D, E adalah objek

   D = N + M;

   D.Tampil();

   int A = 10; // A dan B adalah integer-integer tipe fundamental
   int B =5;

   cout<<"A + B = "<<A+B<<endl;

   return 0;
}