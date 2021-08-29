#include <iostream>
using namespace std;

class Rekt{
   friend int Luas(const Rekt &a);			//fungsi friend Luas()

   int x,y; // private secara default

   public:
      Rekt(int L, int W){x = L, y = W;}		//fungsi konstruktor
}; //akhir dari kelas Rekt 

int Luas (const Rekt &b)	//definisi dari fungsi friend
{
   return b.x*b.y;			//operator resolusi skop tidak diperlukan
}; 

int main()
{
   Rekt R1(5,6), R2(3,4) ; //deklarasi atas dua objek R1 dan R2

   cout<<"Luas Dari R1 = "<<Luas(R1)<<"\n";
   cout<<"Luas dari R2 = "<<Luas(R2)<<"\n";

   return 0 ;
}