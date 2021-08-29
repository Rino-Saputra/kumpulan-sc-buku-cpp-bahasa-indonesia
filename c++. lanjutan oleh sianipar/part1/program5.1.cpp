#include <iostream>
using namespace std;

class B
{
   public :
      int m ,a ;
      int Perkalian1() {return a*m;}
}; //akhir dari kelas B

class D : public B //deklarasi atas kelas terderivasi D
{
   public:
      int n ;
      int Perkalian2() {return n* Perkalian1();}
}; //akhir dari kelas D

int main()
{ 
   D C1;		// C1 adalah sebuah objek dari kelas D
   
   C1.m = 5;	//data secara langsung diakes oleh objek
   C1.a = 4 ;
   C1.n = 3 ;

   cout<<"Perkalian1 = "<<C1.Perkalian1()<<endl;
   cout<<"Perkalian2 = "<<C1.Perkalian2()<<endl;

   return 0;
}