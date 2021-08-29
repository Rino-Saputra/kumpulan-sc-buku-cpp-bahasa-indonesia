#include <iostream>
using namespace std;

class B
{ 
   public :
      void Tampil() {cout<<"Ini adalah fungsi Tampil() dari kelas B"<<endl;}
};

class D1 : public B
{
   public :
      void Tampil() {cout<<"Ini adalah fungsi Tampil() dari kelas D1"<<endl;}
};

class D2 : public D1
{ 
   public :
      void Tampil() {cout<<"Ini adalah fungsi Tampil() dari kelas D2"<<endl;}
};

int main ()
{
   D2 d2 ; //d2 adalah sebuah objek dari kelas D2

   d2.B::Tampil();
   d2.D1::Tampil();
   d2.Tampil();

   return 0;
}