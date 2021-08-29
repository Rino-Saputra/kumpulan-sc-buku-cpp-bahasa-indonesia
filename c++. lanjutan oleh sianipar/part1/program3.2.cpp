#include <iostream>
using namespace std;

class Rekt{
   friend int Luas(const Rekt &a); //sebuah fungsi friend
   int x,y; //private secara default

   public:
      Rekt(int L, int W){x = L, y = W;} //fungsi konstruktor
      friend double Biaya(const Rekt &a, double);
      //fungsi friend kedua
}; //akhir dari kelas Rekt

int Luas(const Rekt &b)					//definisi dari fungsi Luas()
{
   return b.x*b.y;
}

double Biaya(const Rekt &b, double s)	//definisi dari fungs Biaya()
{
   return b.x*b.y * s;
}

int main()
{ 
   double A = 4.5, B = 5.2;		// A dan B untuk data untuk fungsi Biaya()
   Rekt R1(10,5), R2(20,5) ;	// R1, R2 adalah dua objek

   cout<<"Luas dari R1 = "<<Luas(R1)<<"\n";
   cout<<"Luas dari R2 = "<<Luas(R2)<<"\n";

   cout<<"Biaya = "<<Biaya(R1,A)<<"\n";
   cout<<"Biaya = "<<Biaya(R2,B)<<"\n";

   return 0 ;
}