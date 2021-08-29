#include <iostream>
using namespace std;

class B { //kelas basis
   private:
      int m;	//anggota data private
      int Kuadrat(){return m*m ;} //anggota fungsi private

   public :
      void set_nilaib(int a) {m = a;}	//anggota publik untuk mengakses m
      int bKuadrat(){return Kuadrat();} //untuk mengakses Kuadrat()

      int k; //anggota publik dari kelas B
      int perkalian(){return k*k;}
}; //akhir dari kelas B

class D : protected B //pewarisan terproteksi
{
   public:
      void set_nilaid (int n) {set_nilaib(n);}
      void set_nilai2(int p) {k = p;}		//untuk mengakses k,
      int dbkuadrat(){return bKuadrat();}	//untuk mengakses bKuadrat()
      int dperkalian(){return perkalian();}	//untuk mengakses perkalian()
}; //akhir dari kelas D.

int main()
{ 
   D C; //C adalah sebuah objek dari kelas D

   C.set_nilai2(10);
   C.set_nilaid(5);

   cout<<"Perkalian = "<<C.dperkalian()<<endl;
   cout<<"Kuadrat = "<<C.dbkuadrat()<<endl;

   return 0;
}