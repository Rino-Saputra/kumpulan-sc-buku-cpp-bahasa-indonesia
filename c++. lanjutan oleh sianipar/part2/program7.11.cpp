#include <iostream>
using namespace std;

template <class T>
class Kubik {
   T x , y , z ; //variabel x , y, z bertipe data sama

   public:
      Kubik(T L, T W, T H)
	  {
         x = L; y = W; z = H;
	  }
      
	  T luas_permukaan()
	  {
         return 2*(x*y +y*z +z*x);
	  }

      T volume() { 
         return x*y*z;
	  }
};
// akhir dari kelas

int main()
{
   Kubik<int> C1(3, 8, 5);				//dimensi-dimensi bertipe int
   Kubik< double> C2(3.5, 5.5, 4.5) ;	//dimensi-dimensi bertipe double

   cout<<"Volume dari C1 = "<<C1.volume()<<"\n";
   cout<<"Volume dari C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   return 0 ;
}