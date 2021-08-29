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

class D
{
   private:
      int z;

   public:
      C objC ; //objC dideklarasikan sebagai objek dari kelas C
      B objB ; //objB dideklarasikan sebagai objek dari kelas B

      D (int i, int j, int k ) : objB (i), objC(j) {z =k ; cout<<"Konstruktor dari D dipanggil.\n";}

      ~D() {cout<<"Destruktor dari D dipanggil.\n";} 

	   int Perkalian(){return objC.getx()* objB.gety()* z;}
}; //akhir dari kelas D

int main()
{
   D objD(5, 20, 4);

   cout<<"Perkalian = "<<objD.Perkalian()<<endl;

   return 0;
}