#include <iostream>
using namespace std;

class B{
   protected :
      int m;

   public :
      int k;
      int Kuadrat() {return k*k;}
      int mskuadrat() {return m*m;}
}; //akhir dari kelas B

class D : private B //pewarisan private 
{
   public:
      int a;
      void set_nilai1() //anggota publik dari D untuk mengakses
	  {m = a;}			//anggota terproteksi dari B
      
	  void set_nilai2(int b) {k = b;}
      //anggota publik dari D yang diperlukan untuk mengakses anggta publik
	  //dari B.

      //Karena pewarisan private, hal yang sama berlaku berikut.
	  int dmkuadrat(){return mskuadrat();}
      int Dkuadrat(){return B::Kuadrat();}
}; //akhir dari kelas D

int main()
{ 
   D C; // C adalah sebuah objek dari kelas D

   C.set_nilai2(6);
   C.a = 5;
   C.set_nilai1();

   cout<<"Kuadrat = "<< C.Dkuadrat()<<endl;
   cout<<"Kuadrat dari m = "<<C.dmkuadrat()<<endl;

   return 0;
}