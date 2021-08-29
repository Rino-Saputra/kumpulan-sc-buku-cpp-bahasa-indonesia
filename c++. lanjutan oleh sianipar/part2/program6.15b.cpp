#include <iostream>
using namespace std;

class Basis
{ 
   public :
      int x;
      int y;
      void Bicara() { cout<<"Saya adalah kelas Basis.\n";}
}; //akhir dari kelas Basis

class D : public Basis
{ 
   public:
      void bicara() { cout<<"Saya adalah kelas D. \n";}

      Basis B;	//B adalah objek dari kelas Basis

      int Luas(Basis B)
	  {return B.x*B.y;}
};

int main()
{
   Basis B ;

   B.x =5;
   B.y = 20;

   Basis * basisp = &B; // pointer ke kelas Basis
   cout<<"Fungsi Bicara() dipanggil dengan basisp."<<endl;

   basisp -> Bicara();

   cout<<"Setelah operator static cast(), fungsi D dipanggil"<<endl;
   D * dp = static_cast<D*>(basisp);	//basisp cast dikonversi menjadi tipe D
   dp->bicara();		//fungsi Bicara() dari kelas D dipanggil oleh pointer dp

   D* dp1 = (D*)basisp; //konversi konvensional dari bahasa C
   cout<<"Setelah konversi konvensional dari bahasa C, untuk memanggil Bicara()"<<endl;
   dp1 -> bicara();

   D d; //d dideklarasikan sebagai objek dari kelas D
   cout<<"Luas = "<< d.Luas(B)<<endl;	//memanggil fungsi Luas()

   cout<<"Setelah mengkonversi sebuah objek menjadi referensi menggunakan konversi konvensional"<< endl;
   D &dp2 = (D&) B; //mengkonversi sebuah referensi dengan konversi konvensional bahasa C
   dp2.Bicara();	//memanggil sebuah fungsi dari kelas Basis
   dp2.bicara();	//memanggil sebuah fungsi dari kelas D

   D &dp3 = static_cast<D&>(B); //mengkonversi sebuah referensi dengan operator static_cast()
   cout<<"Setelah penerapan operator static_cast(), fungsi-fungsi dipanggil lagi"<<endl;
   dp3.Bicara(); //Bicara() dan Bicara() adalah dua fungsi yang berbeda
   dp3.bicara();

   return 0 ;
}