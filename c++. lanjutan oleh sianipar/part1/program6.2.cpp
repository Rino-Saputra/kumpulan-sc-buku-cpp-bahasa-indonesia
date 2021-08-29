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
   B b; //b dideklarasikan sebagai objek dari kelas B
   D d; //d dideklarasikan sebagai objek dari kelas D

   D *dptr = &(D)d; //pointer ke kelas D
   dptr -> Tampil();

   dptr = & b;		//dptr ditugasi alamat dari kelas basis
					//ini akan menghasilkan error
   dptr -> Tampil();
return 0;
}