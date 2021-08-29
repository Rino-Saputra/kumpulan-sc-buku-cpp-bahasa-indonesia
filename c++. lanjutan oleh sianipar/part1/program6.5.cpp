#include <iostream>
using namespace std;

class B
{
   public:
      virtual void Tampil()
	  {
         cout<<"Tampil dari kelas B dipanggil"<<endl;
	  }
}; //akhir dari kelas B

class D1 : public B
{ 
   public:
      void Tampil()
	  {
         cout<<"Tampil dari kelas D1 dipanggil"<<endl;
	  }
} ; //akhir dari kelas D1

class D2 : public B
{
   public :
      void Tampil ()
	  { 
         cout<<"Tampil dari kelas D2 dipanggil"<<endl;
	  }
}; //akhir dari kelas D2

int main ()
{
   B b;				//b adalah sebuah objek dari kelas B
   B *bptr = &b;	//pointer kelas basis

   D1 d1;			//d1 dan d2 adalah objek dari kelas D1
   D2 d2;			//dan kelas D2 

   bptr ->Tampil();

   bptr = &d1;		//pointer kelas basis ditugasi alamat
					//dari objek kelas terderivasi
   bptr -> Tampil();

   bptr = &d2;
   bptr ->Tampil() ;

   return 0 ;
}