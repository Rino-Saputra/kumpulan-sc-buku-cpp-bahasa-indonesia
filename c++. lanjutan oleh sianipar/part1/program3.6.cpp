#include <iostream>
using namespace std;

class List{
   private:
      int x, y, z;

   public:
      void Tampil1()
	  {cout<<"Selamat datang ke pasar ini"<<endl;}

      void set_harga(int a, int b, int c)
	  {x = a, y = b, z = c;}

      void Tampil2()
	  { 
         cout<<"Harga dari item1 = "<<x<<endl;
         cout<<"Harga dari item2 = "<<y<<endl;
         cout<<"Harga dari item3 = "<<z<<endl; 
	  }
}; //akhir dari kelas List

void main()
{ 
   List L1;
   List *ptr;					//pointer ke List
   ptr = &(List) L1;			//penugasan alamat dari L1 kepada pointer

   ptr -> set_harga(6, 8, 10);	//fungsi yang berelasi dengan L1
   ptr -> Tampil1();

   cout<<"Daftar Harga 1"<<endl;
   ptr ->Tampil2();

   List L2;		//L2 adalah objek kedua dari kelas
   *ptr++;		//penginkremenan pointer ke L1 menghasilkan pointer ke L2.

   ptr -> set_harga(32,27,38); //fungsi yang berelasi dengan L2.
   ptr -> Tampil1();

   cout<<"Daftar Harga 2"<<endl;
   ptr -> Tampil2();
}