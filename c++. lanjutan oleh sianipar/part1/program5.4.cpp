#include <iostream>
using namespace std;

class B { //kelas basis B
   private:
      int x;	//anggota private dari kelas B
      int Kuadrat(){ return x*x ;}		//anggota private dari kelas B

   public:
      void setNilai(int p);				//setNilai()-sebuah anggota publik untuk
										//mengakses anggota private x dari kelas B
      int Pkuadrat(){return Kuadrat();}	//Sebuah anggota publik dari kelas B untuk 
										//mengakes anggota private Kuadrat()
      int m;
}; //akhir dari kelas B

void B::setNilai(int p){x = p;}; //definisi dari setNilai()

class D : public B //deklarasi dari D dengan pewarisan publik
{
   public:
      int n ;
}; //akhir dari kelas D

int main()
{ 
   D C;				//C adalah sebuah objek dari kelas D

   C.setNilai(5) ;	//mengakses x dari kelas B melalui setNilai()

   C.m = 4;			//mengakses anggota publik dari kelas B secara langsung
   C.n = 3;			//mengakses anggota publik dari kelas B secara langsung

   cout<<"Perkalian atas m dan n = "<<C.m*C.n<<endl;
   cout<<"Kuadrat = "<<C.Pkuadrat()<<endl;

   return 0;
}