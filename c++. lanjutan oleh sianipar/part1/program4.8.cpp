#include <iostream>
using namespace std;
class Vektor
{
   int x, y, z ;	//private secara default

   public:
      Vektor(){x = 3, y = 2, z =1;} //konstruktor default 
      Vektor (int a, int b,int c) {x =a ; y = b; z =c;}

	  void operator== (Vektor S)
	  {
         if ( x==S.x && y == S.y && z== S.z)
            cout<<"true"<<endl;
         else
            cout<<"false"<<endl; 
	  }

      void Tampil()
	  {
         cout<<"Vektor = ("<<x<<", "<<y<<" "<<z<<")"<<endl;
	  }
}; //akhir dari kelas Vektor

int main()
{
   Vektor V1(2, 4, 5), V2(6, 5, 8) ,V3(6, 5, 8);

   V1 == V2;
   V2 == V3;

   V1.Tampil();
   V2.Tampil();
   V3.Tampil();

   return 0;
}