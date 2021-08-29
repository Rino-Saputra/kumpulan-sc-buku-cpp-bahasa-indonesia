#include <iostream>
using namespace std;

class B1{
   private:
      int x;

   public:
      B1() { x =1;}				//konstruktor default dari B1
      B1(int a ) { x = a;}		//konstruktor parametris dari B1
      int getx(){return x;}		//fungsi publik dari B1
      ~B1() { }		//destruktor untuk B1
}; //akhir dari kelas B1

class B2 {
   int y;	//private secara default

   public:
      B2(){y=2;}
      B2(int b) {y = b;}		//konstruktor parametris dari B2 
      ~B2(){}		//destruktor untuk B2
      int gety(){ return y;}
}; //akhir dari kelas B2

class D : public B1, public B2
{
   private :
      int z;

   public :
      D(int i, int j, int k) : B1(i), B2(j) {z = k;}
      //Konstruktor untuk D

	  ~D() {} //destruktor dari D
      int Perkalian() {return getx()* gety()*z;} //Sebuah fungsi publik dari D
}; //akhir dari kelas D

int main()
{ 
   D d (4, 5, 6); //d adalah sebuah objek dari kelas D

   cout<<"Perkalian = "<<d.Perkalian()<<endl;
   return 0; 
}