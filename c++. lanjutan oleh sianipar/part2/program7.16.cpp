#include <iostream>
using namespace std;

template <class T> //deklarasi tipe
class Kubik { //awal dari template kelas
   private:
      T x, y, z;

   public:
      Kubik (T, T, T); //prototipe konstruktor
      T luas_permukaan();
      T volume();

      //template fungsi friend
      friend T biayaLukis(T, const Kubik <T> &C);
}; //akhir dari kelas Kubik

template < class T> //definisi dari konstruktor di luar kelas
Kubik <T> :: Kubik<T>(T L, T W, T H) { 
   x = L; y = W; z = H;
}

template <class T>	//definisi dari fungsi luas permukaan
T Kubik <T>::luas_permukaan()
{
   return 2*(x*y +y*z +z*x);
}

template <class T> //definisi dari fungsi volume
T Kubik <T>::volume()
{
   return x*y*z;
}

//berikut adalah definisi dari template fungsi friend
template <class T >
T biayaLukis(T Rho, Kubik<T> &C)
{
   return Rho * C.luas_permukaan();
}

int main()
{
   Kubik<int> C1(4, 5, 6) ;
   Kubik<double> C2(2.5, 3.0, 4.0);

   int D1 = 3;
   double D2 = 2.0;

   cout<<"Volume dari C1 = "<<C1.volume()<<"\n";
   cout<<"Volume dari C2 = "<<C2.volume()<<"\n";

   cout<<"Luas permukaan dari C1 = "<<C1.luas_permukaan()<<"\n";
   cout<<"Luas permukaan dari C2 = "<<C2.luas_permukaan()<<"\n";

   cout<<"Biaya melukis P1 = "<<biayaLukis(D1, C1)<<"\n";
   cout<<"Biaya melukis P2 = "<<biayaLukis(D2, C2)<<"\n";

   return 0 ;
}