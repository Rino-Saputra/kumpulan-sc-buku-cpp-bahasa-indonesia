#include <iostream>
using namespace std;

class C
{
   private:
      int x;

   public:
      C(int a) {x = a;
                cout<<"Konstruktor dari C dipanggil.\n";} 
      ~C(){ cout<<"Destruktor dari C dipanggil.\n";} 

      int getx() { return x;}
}; //akhir dari kelas C

class B {
   private:
      int y;

   public:
      B (int b) {y = b;
                 cout<<"Konstruktor dari B dipanggil.\n";}
      ~B(){cout<<"Destruktor dari B dipanggil.\n";} 
      int gety(){return y;}
}; //akhir dari kelas B

class D : public B	//kelas D diderivasi dari kelas B
{
   private:
      int z;

   public:
      C c ; //objek c dari kelas C di dalam kelas D

      // Below is the constructor of class D.
      D (int m, int n, int k ) : B(m), c(n) 
	  { 
         z =k;
         cout<<"Konstruktor dari D dipanggil.\n";
	  }
      //konstruktor dari B dipanggil dengan nama kelas B.
      //konstruktor dari C dipanggil dengan nama objeknya c.

      ~D() {cout<<"Destruktor dari D dipanggil.\n";}

      int Perkalian() {return c.getx()* gety()* z;}
}; //akhir dari kelas D

int main()
{
   D d(10, 20, 5); //objek dari kelas D

   cout<<"Perkalian = "<<d.Perkalian()<<endl;

   return 0;
}