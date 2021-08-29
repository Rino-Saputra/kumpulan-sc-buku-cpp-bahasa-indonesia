#include <iostream>
using namespace std;

class B1 { //awal dari kelas B1
   private:
      int x;

   public:
      B1() {x = 4;
            cout<<"Konstruktor dari B1 dipanggil\n";}	
      ~B1(){cout<<"Destruktor dari B1 dipanggil\n";}	
}; //akhir dari kelas B1

class B2 //awal dari kelas B2
{
   private:
      int y;

   public:
      B2() {y = 5;
            cout<<"Konstruktor dari B2 dipanggil\n";} 
      ~B2(){cout<<"Destruktor dari B2 dipanggil\n";} 
}; //akhir dari kelas B2

class D : public B1, B2		//kelas D diderivasi dari B1 dan B2
{ 
   private:
      int z;

   public:
      D (int c) { z =c; cout<<"Konstruktor dari D dipanggil\n";}
      ~D() {cout<<"Destruktor dari D dipanggil\n";}
}; //akhir dari kelas D

int main()
{
   D d (10);	//d dideklarasikan sebagai objek dari kelas D

   return 0;
}