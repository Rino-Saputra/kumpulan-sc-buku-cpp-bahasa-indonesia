#include <iostream>
using namespace std;

class B {
   protected :
      int m;

   public:
      int k;
}; //akhir dari kelas B

class D : private B //pewarisan private
{
   public: //pemodifikasi akses pada kelas D
      int a;
      void set_nilai() {m = a;}
      int n;
};//akhir dari kelas D

int main()
{ 
   D C; //C adalah sebuah objek dari kelas D

   C.k = 6;
   C.a = 5;
   C.n = 4;

   int perkalian = C.a * C.n;

   cout<<"Perkalian dari anggota-anggota dari B dan D = "<<perkalian<< endl;
   cout<<"Penjumlahan atas kuadrat dari anggota-anggota dari B dan D = "<< C.n*C.n + C.a*C.a<<endl;

   return 0;
}