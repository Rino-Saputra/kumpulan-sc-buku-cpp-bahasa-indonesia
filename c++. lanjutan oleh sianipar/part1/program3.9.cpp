#include <iostream>
using namespace std;

class Rekt{
   friend int Luas(Rekt a); //fungsi friend 
   int x, y; //anggota-anggot data private secara default

   public:
      friend double biaya(Rekt a, double);	//fungsi friend lain
      Rekt (int L,int W){ x = L,y = W;}		//konstruktor
}; //akhir dari kelas Rekt

int Luas (Rekt b) //definisi dari fungsi Luas() menggunakan pointer
{ 
   int Rekt :: *ptrx = &Rekt :: x; //ptrx adalah pointer untuk x
   int Rekt :: *ptry = &Rekt :: y; //ptry adalah pointer untuk y
   Rekt *ptrb = &b; //ptrb adalah pointer yang menunjuk ke b

   return b.*ptrx * b.*ptry;
};

double biaya(Rekt b , double m)
{
   return b. x* b. y * m;
}

int main()
{ 
   double n = 4.5;

   Rekt R1(5,6), R2(3,4);

   cout<<"Luas of R1 = "<<Luas(Rekt(R1))<<"\n";
   cout<<"Luas of R2 = "<<Luas(Rekt(R2))<<"\n";
   cout<<"biaya for R1 = "<<biaya(Rekt(R1),n)<<"\n";

   return 0 ;
}