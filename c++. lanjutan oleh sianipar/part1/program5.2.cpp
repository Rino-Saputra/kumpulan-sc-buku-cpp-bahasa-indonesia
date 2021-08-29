#include <iostream>
using namespace std;

class B //deklarasi atas kelas B
{
   protected :
      int m ;	//anggota terproteksi dari kelas B

   public:
      int k;
      int Kuadrat() {return k*k ;}
      int Perkalian() {return k*m;}
}; //akhir dari kelas B

class D : public B //kelas D mewarisi kelas B
{
   public:
      void setNilai1(int a) //fungsi publik untuk mengakses m dari kelas B
	  {m = a;}
}; //akhir dari kelas D.

int main()
{ 
   D C;				//C dideklarasikan sebagai objek dari D
   
   C.k = 9;			//Akses langsung terhadap k dari kelas B
   C.setNilai1(6);	//Akses terhadap m melalui anggota publik dari D

   cout<<"Kuadrat = "<<C.Kuadrat()<<", Perkalian = "<< C.Perkalian()<<endl;

   return 0;
}