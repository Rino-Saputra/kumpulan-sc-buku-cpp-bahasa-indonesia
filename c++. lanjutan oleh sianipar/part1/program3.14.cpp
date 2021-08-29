#include <iostream>
using namespace std;

class Kubik {
   public:
      Kubik(int H):z(H) {} //konstruktor
      static int luas_dasar(){ return x*y;} //fungsi statis
      int luas_permukaan();
      int volume( );

   private:
      static int x , y;		//x dan y dideklarasikan static
      int z ;
}; //akhir dari kelas Kubik

int Kubik :: x = 5; //anggota data statis
int Kubik :: y =8 ; //anggota data statis

int Kubik::luas_permukaan()	//definisi dari luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

int Kubik::volume()			//definisi dari volume()
{
   return x*y*z;
}

int main()
{
   Kubik C1(5), C2(8) ;

   cout<<"Luas dasar dari semua objek = "<<Kubik::luas_dasar()<<endl;
   
   cout<<"Volume dari Kubik C1 " <<C1.volume()<<"\n";
   cout<<"Volume dari Kubik C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   return 0 ;
}