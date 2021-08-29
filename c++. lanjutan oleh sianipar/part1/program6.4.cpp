#include <iostream>
using namespace std;

class B
{
   public:
      virtual void Tampil()
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
   B b; //b dideklarasikan sebagai objek dari kelas B
   D d; //d dideklarasikan sebagai objek dari kelas D

   B *bptr = &(B) b ;	//pointer kelas basis
   bptr -> Tampil();	//statemen untuk memanggil fungsi kelas basis

   bptr = & d;			//pointer kelas basis ditugasi alamat dari objek terderivasi d
   bptr -> Tampil();	//memanggil fungsi Tampil() dari kelas terderivasi

   return 0;
}