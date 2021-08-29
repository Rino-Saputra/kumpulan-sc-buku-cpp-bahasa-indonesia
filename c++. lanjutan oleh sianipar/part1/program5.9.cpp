#include <iostream>
using namespace std;

class B1 {
   private :
      int m ;

   public :
      int a;
      void set_nilai()
	  {m = a;}
}; //akhir dari kelas B1

class B2
{ 
   public :
      int k;
}; //akhir dari kelas B2

class D : public B1,public B2
//deklarasi pewarisan jamak
{
   public:
      int n ;
};
//akhir dari kelas D

int main()
{ 
   D C;			//C dideklarasikan sebagai objek dari kelas D

   C.k = 5;		//C mengakses langsung anggota publik dari B2
   C.a = 4;		//C mengakses langsung anggota publik dari B1
   C.n = 3;

   int perkalian = C.a* C.n*C.k;

   cout<<"Perkalian dari anggota-anggota data dari B1, B2, dan D = "<<perkalian<< endl;

   return 0;
}