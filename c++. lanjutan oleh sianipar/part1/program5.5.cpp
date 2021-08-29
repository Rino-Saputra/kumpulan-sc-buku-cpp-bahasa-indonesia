#include <iostream>
using namespace std;

class B {
   protected :	//akses terproteksi
      int m;	
      int Kuadrat() {return m*m;}

   public:		//akses publik
      int k;
      perkalian() {return k*m;}
}; //akhir dari kelas B

class D : protected B //pewarisan terproteksi
{ 
   public:
      void setNilai1(int a) //anggota publik untuk mengakses m
	  {m = a;}
      
	  void setNilai2(int p) {k = p;} //anggota publik untuk mengakses k
      int dKuadrat(){return B::Kuadrat();}		//untuk mengakses Kuadrat()
      int dperkalian(){return B::perkalian();}	//untuk mengakses perkalian()
}; //akhir dari kelas D

int main()
{ 
   D C;		//C adalah sebuah objek dari kelas D

   C.setNilai2(10);
   C.setNilai1(5);

   cout<<"Perkalian atas m dan k = "<<C.dperkalian()<<endl;
   cout<<"Kuadrat = "<< C.dKuadrat()<<endl;

   return 0;
}