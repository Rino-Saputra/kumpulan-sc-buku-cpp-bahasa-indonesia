#include <iostream>
using namespace std;

class Bilangan
{
   int x, y; //bilangan kompleks, x + yi, private secara default

   public:
      Bilangan(int a, int b) {x =a ; y = b;} // konstruktor
      Bilangan(){}; //konstruktor default

      Bilangan& operator+(const Bilangan & m) //pendefinisian-ulang operator +
	  {
         x = x + m.x;
         y = y + m.y;
         return* this; 
	  }

      void Tampil(){
         cout<<"Bilangan resultan adalah = "<<x<<" + "<<y<<"i"<<endl;}
}; //akhir dari kelas Bilangan

int main()
{ 
   Bilangan N(16, 21), M(5, 6), D;

   D = N + M;
   D.Tampil();

   return 0;
}