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
      void Tampil()
	  { 
         cout<<"Tampil dari kelas D2 dipanggil"<<endl;
	  }
}; //akhir dari kelas D2

class D3 : public B
{
   public :
      void Tampil()
	  { 
         cout<<"Tampil dari kelas D3 dipanggil"<<endl;
	  }
}; //akhir dari kelas D3

int main ()
{
   B b;

   D1 d1;
   D2 d2;
   D3 d3;

   B *bptr[] = {&b , &d1, &d2, &d3}; //Array yang memuat pointer-pointer kelas B

   for (int i = 0; i<4; i++)
      bptr[i] ->Tampil();

   return 0 ;
}