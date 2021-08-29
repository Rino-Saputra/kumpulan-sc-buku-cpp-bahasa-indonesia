#include <iostream>
using namespace std;

class B {
   protected:
      int bx;

   public:
      B(){}
      B(int m) {bx = m;}

      int getbx(){return bx;}
}; //akhir dari kelas B

class D1
{
   protected:
      int D1x;

   public:
      D1(){}
      D1(int m) {D1x = m;}

      int getD1x(){return D1x;}
}; //akhir dari kelas D1

class D2 : public D1
{
   protected:
      int D2x;

   public:
      int getD2x(){return D2x;}
      D2(){}
      D2(int e) {D2x = e;}
}; //akhir dari kelas D2

class D3 : public D2
{
   private:
      int D3x;

   public:
      B b;		//b adalah sebuah objek dari kelas B
      D1 d1;	//d1 adalah sebuah objek dari kelas D1

      //konstruktor dari D didefinisikan berikut.
      D3 (int i, int j, int k, int s) : b(i), d1(j), D2(k) {D3x = s;}

	  int Perkalian() {return D3x * D2x * d1.getD1x() * b.getbx();}
      void Tampil(){cout<<"Tampil() dari kelas D3."<<endl;}
}; //akhir dari kelas D3

int main ()
{
   D3 d3 ( 10, 5, 4, 2);

   cout<<"Perkalian = "<<d3.Perkalian()<<endl;

   return 0 ;
}