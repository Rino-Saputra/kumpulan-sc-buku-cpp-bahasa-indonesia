#include <iostream>
using namespace std;

class B
{
   protected:
      int bx;

   public :
      B() {}		//konstruktor kosong dari kelas basis
      B(int m) 
      { 
         bx = m ;	//konstruktor dari kelas basis
         cout<<"Konstruktor dari kelas B dipanggil"<<endl;
      }

      virtual int Perkalian()
      {
         return 2*bx;
      }

      //fungsi destruktor tidak dideklarasikan virtual
      virtual ~B() 
      { 
         cout<<"Destruktor dari kelas B dipanggil"<<endl;
      }
}; //akhir dari kelas B

class D1
{
   protected :
      int D1x ;

   public :
      D1 () {}		//konstruktor kosong (default) dari D1
      D1(int n)
      { 
         D1x = n;	// constructor of class D1
         cout<<"Konstruktor dari D1 dipanggil"<<endl;
      }

      int getD1x()
      { 
         return D1x;
      }
      
	  ~D1() 
      { 
         cout<<"Destruktor dari D1 dipanggil"<<endl;
      }
};

class D2
{
   protected :
      int D2x ;

   public :
      D2(){}
      D2(int p) 
      { 
         D2x = p ;
         cout <<"Konstruktor dari D2 dipanggil"<<endl;
      }

      int getD2x()
      { 
         return D2x;
      }

      ~D2()
      { 
         cout <<"Destruktor dari D2 dipanggil"<<endl;
      }
};

class D3 : public B
{
   int D3x; // private secara default

   public :
      D3() {}
      D1 d1;	//d1 dideklarasikan sebagai objek dari kelas D1
      D2 d2;	//d2 dideklarasikan sebagai objek dari kelas D2
      
      D3(int p, int q , int r, int s): B(p), d1(q), d2(r) 
      { 
         D3x = s;
         cout<<"Konstruktor dari D3 dipanggil"<< endl;
      }

      int Perkalian()
      { 
         return D3x * d2.getD2x() * d1.getD1x() * bx;
      }

      ~D3() 
      { 
         cout<<"Destruktor dari D3 dipanggil"<<endl;
      }
};

int main ()
{
   B *Bp ;
   Bp = new B(10); //objek dinamis yang diciptakan dengan operator new

   cout<<"Perkalian dari B = "<<Bp ->Perkalian()<<endl;

   Bp = new D3(2, 3, 4, 5);

   cout<<"Perkalian = "<<Bp -> Perkalian()<<endl;

   delete Bp; //penghapusan pointer kelas basis

   return 0 ;
}
