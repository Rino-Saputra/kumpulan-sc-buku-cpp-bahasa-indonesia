#include <iostream>
using namespace std;

class B
{
   public:
      void Tampil()
	  {
         cout<<"Apakah Anda akan belajar C++?"<<endl;
	  }
}; //akhir dari kelas B

class D : public B
{
   public :
      void Tampil()
	  {
         cout<<"Saya juga belajar C++"<<endl;
	  }
}; //akhir dari kelas D

int main()
{ 
   B b;		//b adalah sebuah objek dari kelas basis B
   D d;		//d adalah sebuah objek dari kelas terderivasi D

   B *bptr; //pointer ke kelas B

   bptr = &(B)b;		//inisialisasi pointer ke objek dari kelas B
   bptr -> Tampil();	//fungsi Tampil() dipanggil dengan pointer

   bptr = & d;			//pointer ditugasi alamat dari d.
   bptr -> Tampil();	//pointer dipakai untuk memanggil fungsi

   return 0;
}