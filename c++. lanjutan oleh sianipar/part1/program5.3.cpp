#include <iostream>
using namespace std;

class B
{
   private : //akses private
      int m ;
}; //akhir dari kelas B

class D : public B //deklarasi atas kelas D
{
   public:
      int a;
      void setNilai() //fungsi untuk mengakses m dari kelas B
	  {m = a;}

      int n;
}; //akhir dari kelas D

int main()
{ 
   D C;		//C adalah sebuah objek dari kelas D

   C.a = 5;
   C.n = 4;

   int kali = C.a* C.n;

   cout<<"Perkalian atas angota-anggota = "<<kali<<endl;
   cout<<"Penjumlahan dari anggota-anggota terkuadrat = "<<C.n*C.n + C.a*C.a<<endl;

   return 0;
}