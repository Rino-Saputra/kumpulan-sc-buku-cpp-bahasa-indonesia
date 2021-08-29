#include <iostream>
using namespace std;

class B
{ 
   public :
      virtual void Tampil() = 0;
} ; //akhir dari kelas B

class D1 : public B // Derived class
{ 
   public :
      void Tampil(){ cout <<"Tampil() dari kelas D1 dipangil"<<endl;}
};

int main()
{ 
   B b ; //objek b dari kelas B dideklarasikan yang menghasilkan error

   B *bptr = &b;
   bptr -> Tampil();

   return 0 ;
}