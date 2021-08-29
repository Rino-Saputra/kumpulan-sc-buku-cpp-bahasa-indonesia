#include <iostream>
using namespace std;

class B
{ 
   public:
      B() {};
      virtual void Fungsi(){};
};

class D1 : public B
{}; 

class D2 : public B
{};

class D3 : public B
{};

int main ()
{ 
   B* Ab[3];
   Ab[0] = new D1;
   Ab[1] = new D2;
   Ab[2] = new D3;

   for (int i =0; i<3; i++)
   {
      D2 *ptrd2 = dynamic_cast<D2*>(Ab[i]);
      
	  if (ptrd2 != 0 )
         cout<<"Objek D2 ditemukan\n"; 
   }

   return 0; 
}