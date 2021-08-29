#include <iostream>
using namespace std;

class Vektor{
   private:
      int x, y, z ;		//tiga komponen dari sebuah Vektor

   public:
      Vektor(int a, int b, int c){x =a; y = b; z =c;} //konstruktor
      Vektor(){}; //konstruktor kosong atau default
      
	  Vektor operator+ (const Vektor&S) //untuk membebani operator biner +
	  { //hanya satu argumen yang diperlukan
         x = x +S.x;
         y = y + S.y;
         z = z + S.z; 
         return Vektor (x,y,z);
	  } //fungsi pembebanan operator menjadi fungsi anggota kelas

	  void Tampil()
	  {
         cout<<"Komponen x = "<<x<<endl;
         cout<<"Komponen y = "<<y<<endl;
         cout<<"Komponen z = "<<z<<endl;
	  }
}; //akhir dari kelas Vektor

int main()
{ 
   Vektor V1(2, 4, 5), V2(6, 5, 8), V3;

   V3 = V1 + V2;

   V3.Tampil();

   return 0;
}