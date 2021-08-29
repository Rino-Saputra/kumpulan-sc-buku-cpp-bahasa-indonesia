#include <iostream>
using namespace std;

class B
{ 
   protected:
      int bx;

   public:
      void Bset(int m) { bx = m ;}
      void Tampil(){cout<<"Tampil() dari kelas B "<<endl;}
}; //akhir dari kelas B

class D1 : public B
{
   protected:
      int D1x;

   public:
      void D1set(int n){ D1x = n;}
      void Tampil(){cout<<"Tampil() dari kelas D1"<<endl;}
}; //akhir dari kelas D1

class D2 : public D1
{
   protected:
      int D2x;

   public:
      void D2set(int p) { D2x = p ;}
      void Tampil(){cout<<"Tampil() dari kelas D2"<<endl;}
}; //akhir dari kelas D2

class D3 : public D2
{
   private:
      int D3x;

   public :
      void D3set(int q) { D3x = q;}
      int Perkalian() { return D3x * D2::D2x * D1::D1x * B::bx;}
      void Tampil(){ cout<<"Tampil() dari kelas D3 "<<endl;}
}; //akhir dari kelas D3

int main ()
{
   D3 d3;

   d3.D3set (10);
   d3.D2::D2set(4);

   d3.D1::D1set(3);
   d3.B::Bset(2);
   cout<<"Perkalian = "<<d3.Perkalian()<<endl;

   d3.Tampil();
   d3.D2::Tampil();

   d3.D1::Tampil();
   d3.B::Tampil();

   return 0 ;
}