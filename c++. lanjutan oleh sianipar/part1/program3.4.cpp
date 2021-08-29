#include <iostream>
using namespace std;

class Kubik {
   friend class Lukis; //deklarasi dari kelas friend 

   public:
      void sisi2(int , int, int);
      int Luas();
      int volume();
      int x, y, z;
}; //akhir dari kelas Kubik

void Kubik::sisi2(int L, int W, int H)
{x = L, y = W,z = H; } //pengaturan sisi-sisi dari Kubik

int Kubik::Luas()		//definisi dari Luas()
{return 2*(x*y +y*z +z*x);}

int Kubik::volume()		//definisi dari volume()
{return x*y*z ;}

class Lukis{ //deklarasi dari kelas friend Lukis
   private:
      int R;

   public:
      Lukis() {R = 1;}		//konstruktor default
      Lukis(int S) {R = S;} //konstruktor parametris

	  Kubik C; // C adalah objek dari kelas Kubik
      int Luas (){return C.Luas ();}
      int biaya(int R , Kubik C )	
	  {return R* C.Luas ();}		
}; //akhir dari kelas Lukis

int main()
{
   Kubik C1 ;	//C1 adalah objek dari kelas Kubik
   C1.sisi2 (5,6,5 );

   Lukis P1 ;	//P1 adalah objek dari kelas Lukis
   int k = 4;

   cout<<"Volume dari C1 = "<<C1.volume()<<"\n";
   cout<<"Luas permukaan dari C1 = "<<C1.Luas()<<"\n";

   cout<<"Biaya pelukisan P1 = "<<P1.biaya(k, C1)<<"\n";

   return 0 ;
}