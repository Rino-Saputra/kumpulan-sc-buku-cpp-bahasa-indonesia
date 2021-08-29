#include <iostream>
using namespace std;

class Kubikel {
   private:
      int x, y, z;

   public:
      Kubikel(){}
      Kubikel(int a, int b, int c ) //konstruktor
	  {   x = a;
          y = b;
          z = c;
          cout<<"konstruktor dari Kubikel dipanggil"<<endl;
	  }

      int luas_permukaan() { return 2*(x*y +y*z +z*x);}
}; //akhir dari kelas Kubikel

class Kubik : public Kubikel
{
   public:
      int tarif;
      Kubikel C;

      //berikut adalah konstruktor dari kelas Kubik
      Kubik(int L, int W, int H, int A) : Kubikel (L, W, H) {tarif = A;}
      int biaya(int tarif, Kubikel C ){return tarif * C.luas_permukaan();}
}; //akhir dari kelas Kubik

int main()
{
   int x =2;

   Kubikel C1 (3, 3, 3);
   Kubikel C2 (4, 5, 6);

   Kubik Kubik1(3,3,3, x);
   Kubik Kubik2(4,5,6,3);

   cout<<"Luas permukaan dari Kubik1 = "<<Kubik1.luas_permukaan()<<"\n";
   cout<<"Biaya untuk Kubik1 = "<<Kubik1.biaya(x, C1 )<<"\n";

   cout<<"Luas permukaan dari Kubik2 = "<<Kubik2.luas_permukaan()<<"\n";
   cout<<"Biaya untuk Kubik2 = "<<Kubik2.biaya(3,C2)<<"\n";

   return 0;
}