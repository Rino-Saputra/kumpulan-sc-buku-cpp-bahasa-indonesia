#include <iostream>
using namespace std;

class B
{ 
   protected:
      int x;

   public:
      B () { x = 4;}
      B(int a) {x = a;
                cout<<"Konstruktor basis dipanggil"<<endl;}

	  B(const B &b) {x = b.x;
                     cout<<"Konstruktor penyalin dari kelas B dipanggil"<<endl;}
};

class D : public B
{
   int y; //private secara default

   public:
      D() {y = 5;}
      D(int k){y = k;
               cout<<"Konstruktor kelas terderivasi dipanggil"<<endl;}
      
	  int Tampil() {return y;}
};

int main()
{
   D d1 (10);	//d1 didefinisikan sebagai objek dari kelas D
   D d2 = d1;	//d2 didefinisikan sebagai salinan dari d1.

   cout<<"d2 = "<<d2.Tampil()<<endl;

   return 0 ;
}