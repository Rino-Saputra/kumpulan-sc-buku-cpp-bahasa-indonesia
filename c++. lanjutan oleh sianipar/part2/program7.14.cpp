#include <iostream>
using namespace std;

template <class T>
class Rekt {
   friend T Luas(const Rekt &R); //deklarasi dari template fungsi friend

   private:
      T x; // x dan y adalah sisi-sisi dari persegi-panjang
      T y;

   public:
      Rekt(T A, T B) {x = A , y = B; } //konstruktor
}; //akhir dari template kelas

template <class T> //definisi dari fungsi friend
T Luas(const Rekt <T> &R)
{
   return R.x* R.y ;
} // R adalah sebuah objek

int main ()
{
   Rekt<int> kuRekt(6, 2); // kuRekt adalah sebuah objek dari Rekt

   cout<<"Luas = "<<Luas(kuRekt)<<endl;

   return 0;
}