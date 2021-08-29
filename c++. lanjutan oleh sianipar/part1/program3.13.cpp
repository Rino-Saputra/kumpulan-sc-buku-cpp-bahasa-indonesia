#include <iostream>
using namespace std;

class Kubik{
   public:
      static int x; //x dideklarasikan static
      Kubik( int W ): y(W) {}	//konstruktor

      static void Tampil()		//fungsi statis
	  {
         cout<<"Tinggi dari semua objek adalah = "<<z<<endl;
	  }
      int luas_permukaan();
      int volume();

   private:
      int y;
      static int z; //variabel statis
}; //akhir dari kelas Kubik

int Kubik :: x = 10;
int Kubik :: z = 5;

int Kubik::luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

int Kubik::volume()
{
   return x*y*z;
}

int main()
{
   Kubik C1(6), C2(3);

   cout<<"C1.x = "<<C1.x<<", C2.x = "<<C2.x <<endl;
   Kubik::Tampil(); //pemanggilan fungsi tanpa objek

   cout<<"Volume dari Kubik C1 " <<C1.volume()<<"\n";
   cout<<"Volume dari Kubik C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   return 0 ;
}