#include <iostream>
using namespace std;

class Kubik {
   public:
      Kubik(int L, int W, int H){this ->x=L, (*this).y=W, this->z=H;}
      //fungsi di atas adalah konstruktor

      int luas_permukaan();
      int volume();

      void Tampil1() // Displays private data of object.
	  {
         cout<<"x = "<<this->x<<", y = "<<this->y<<", z = "
             <<(*this).z <<endl;
	  }

      void Tampil2()
	  {cout << this<<endl;} //menghasilkan nilai dari this

   private:
      int x, y, z;			//data private 
}; //akhir dari kelas Kubik

int Kubik::luas_permukaan() //definisi dari luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

int Kubik::volume()			//definisi dari volume()
{
   return x*y*z;
}

int main()
{ 
   Kubik C1(5,6,4), C2(7,8,5) ; //C1 dan C2 adalah objek dari Kubik

   C1.Tampil1();
   C1.Tampil2();		//nilai dari pointer this untuk C1

   cout<<&C1<<endl;		//alamat dari C1
   C2.Tampil1();
   C2.Tampil2();		//nilai dari pointer this untuk C2
   cout<<&C2<<endl;		//alamat dari C2

   cout<<"Volume dari Kubik C1 = "<<C1.volume()<<"\n";
   cout<<"Volume dari Kubik C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   return 0 ;
}