#include <iostream>
using namespace std;

class Rekt {
   int x, y;	//private secara default

   public:
      void set_sisi(int L, int W){x = L, y = W;}
      int Luas() //definisi dari fungsi Luas()
	  {
         return x*y;
	  }
}; //akhir dari kelas Rekt

int main()
{ 
   Rekt R1, R2, R3;
   void (Rekt:: *ptrSet)(int,int) = & Rekt :: set_sisi;

   (R1.*ptrSet) (20,15);
   cout<<"Luas dari R1 = "<<R1.Luas()<<endl;

   (R2.*ptrSet) (20,30);	//objek R2 memanggil fungsi dengan pointer
   cout<<"Luas dari R2 = "<<R2.Luas()<<endl;

   Rekt *ptr3 = &R3;		// declaring pointer to object R3 of class

  (ptr3 ->*ptrSet)(16,10); //memanggil fungsi dengan pointer yang menunjuk ke objek
   cout<<"Luas dari R3 = "<<R3.Luas()<<endl;

   return 0 ;
}