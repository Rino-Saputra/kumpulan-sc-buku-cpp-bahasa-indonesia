#include <iostream>
#include <string>
using namespace std;

class A;	//kelas tak-utuh
class B;	//kelas tak-utuh

class Basis
{ 
   public :
      void Bicara() {cout<<"Saya adalah kelas Basis.\n";}
};

class D : public Basis
{ 
   public:
      void bicara() {cout<<"Saya adalah kelas D.\n";}
};

int main()
{ 
   int x = 65;
    
   int* px = &x;			//px adalah pointer yang menunjuk ke int x
   char* chp = (char*) px;	//px dikonversi menjadi pointer char* chp
							//dengan konversi konvensional bahasa C

   cout<<"*chp = "<<*chp<<endl;		//statemen keluaran untuk *chp
   cout<<*px <<endl;

   //berikut konversi sama yang dilakukan oleh reinterpret_cast<>()
   char* ptrx = reinterpret_cast<char*> (px);
   cout<<"*ptrx = "<<*ptrx<<endl;

   D* ptrd = reinterpret_cast<D*>(px); //px dikonversi menjadi tipe D
   ptrd -> bicara();

   B* bp;		//Operator ini juga dapat diterapkan pada kelas tak-utuh
   A* ap = reinterpret_cast<A*>(bp);
}