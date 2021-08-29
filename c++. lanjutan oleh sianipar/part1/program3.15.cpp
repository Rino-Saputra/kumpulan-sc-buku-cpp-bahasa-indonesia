#include <iostream>
using namespace std;

class List{
   private:
      double x ; // x = berat dalam kg, y = harga per kg
      double y;

   public:
      void set_data(double a, double b )
	  {x = a; y = b;}

      void Tampil()
	  {
         cout<<"Berat = "; cin>>x;
         cout<<"Harga = "; cin>>y;
         cout<<"Harga dari "<<x<<" kg dengan biaya "<<y<<" per kg = "<<x*y<<endl;
	  }
};

void main()
{
   double i,j;

   List *ptr= new List ; //menggunakan operator new
   (*ptr).set_data(i,j);

   ptr -> Tampil();		//(*ptr) dan ptr-> ekivalen

   delete ptr;
}