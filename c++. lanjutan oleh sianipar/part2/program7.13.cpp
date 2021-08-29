#include <iostream>
using namespace std;

template <class T>	//deklarasi dari template kelas
class Kubik {
   public:
      Kubik(T, T, T);		//prototipe konstruktor
   
      T luas_permukaan();	//prototipe fungsi di dalam tubuh kelas
      T volume();			//prototipe fungsi di dalam tubuh kelas

   private:
      T x, y, z;
}; //akhir kelas

template < class T>		//definisi fungsi konstruktor
Kubik <T>::Kubik <T> (T L, T W, T H) 
{
   x = L; y= W; z=H;
}

template <class T>		//definisi fungsi
T Kubik <T>::luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

template <class T >		//definisi fungsi
T Kubik <T>::volume()
{
   return x*y*z;
}

int main()
{
   Kubik<int> C1(5,6,4);			//Objek dengan dimensi-dimensi int
   Kubik<double> C2(2.2,3.5,4.5) ;	//Objek dengan dimensi-dimensi 
									//dalam nilai-nilai titik-mengambang

   cout<<"Volume dari C1 = "<<C1.volume()<<"\n";
   cout<<"Volume dari C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   return 0 ;
}