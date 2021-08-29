#include <iostream>
using namespace std;

class List{
   private:
      int x, y, z;

   public:
      int Alfa;
      List (int a, int b, int c) {x = a, y = b, z = c;} //konstruktor
}; //akhir dari kelas List

void main()
{
   List L1(10, 20, 30);
   int *pAlfa;			//pointer ke suatu integer

   L1. Alfa = 50;
   pAlfa = & L1.Alfa;	//penugasan nilai kepada pointer

   cout<<"Alfa = "<<*pAlfa<< endl;
   cout<<"Alamat dari Alfa = "<<pAlfa<< endl;

   pAlfa--;				//mendekremen pointer untuk mendapatkan z
   cout<<"Data z dari L1 = "<<*pAlfa <<endl;
   cout<<"Alamat dari z = "<<pAlfa<<endl;

   pAlfa--;				//mendekremen pointer untuk mendapatkan y
   cout<<"Data y dari L1 = "<<*pAlfa <<endl;
   cout<<"Alamat dari y = "<<pAlfa<<endl;
   
   pAlfa--;				//mendekremen pointer untuk mendapatkan x
   cout<<"Data x dari L1 = "<<*pAlfa <<endl;
   cout<<"Alamat dari x = "<<pAlfa<<endl;
}