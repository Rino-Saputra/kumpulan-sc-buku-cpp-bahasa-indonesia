template <class U> class lukis;
#include <iostream>
using namespace std;

template <class T>
class Kubik {
   friend class lukis;		//deklarasi dari kelas lukis sebagai friend

   public:
      Kubik ( T, T, T);		//prototipe konstruktor dari kelas Kubik
      T luas_permukaan();	//prototipe dari luas_permukaan() dan volume()
      T volume();

   private:
      T x, y, z; // x , y and z are of same type
}; //akhir dari kelas Kubik

template < class T>		//definisi konstruktor untuk kelas Kubik
Kubik <T> :: Kubik<T>(T L, T W, T H) { 
   x = L; y = W; z = H;
}

template <class T>		//definisi dari fungsi luas_permukaan()
T Kubik <T>::luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

template <class T>		//definisi dari fungsi volume()
T Kubik <T>::volume()
{
   return x*y*z;
}

template <class U> //kelas lukis
class lukis { //definisi dari kelas lukis
   private:
      U Rho;

   public:
      lukis (U);		//prototipe dari konstruktor
      lukis(){Rho =2;};	//konstruktor default

	  U biaya(U Rho,U luas_permukaan ) //definisi dari fungsi biaya()
	  {
         U CP; // CP = biaya lukis
         CP = Rho* luas_permukaan ;
         return CP;
	  }
}; //akhir dari kelas lukis

template <class U> //konstruktor untuk kelas lukis
lukis<U>::lukis<U>(U D) { 
   Rho = D;
}

int main()
{ 
   Kubik<int> C1(4, 5, 6);
   Kubik<int> C2(2, 3, 4);

   lukis<int> P1;
   lukis<int> P2;

   int R1 =2;
   int R2 = 3;

   cout<<"Volume dari C1 = " <<C1.volume()<<"\n";
   cout<< "Volume dari C2 = " <<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   cout<<"Biaya melukis P1 = "<<P1.biaya(7, C1.luas_permukaan())<< "\n";
   cout<<"Biaya melukis P2 = "<< P2.biaya (7, C2.luas_permukaan())<<"\n";

   return 0 ;
}