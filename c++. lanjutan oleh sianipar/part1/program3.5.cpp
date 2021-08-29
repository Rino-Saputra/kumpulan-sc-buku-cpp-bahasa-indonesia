#include <iostream>
using namespace std;

class List
{
   private:
      int x,y;	//x = jumlah item, y = harga per tem

   public:
      void Setdata(int a, int b) //fungsi publik untuk mengakses x, y
	  {
		 cout<<"Masukkan jumlah item: "; cin>>a;
         cout<<"Masukkan harga per item: "; cin>>b;
         x = a, y = b; 
	  }

      void Tampil1()
	  {cout<<"Jumlah item = "<<x<<endl;}

      void Tampil2()
	  {cout<<"Harga per item = "<<y<<endl;}

      void Tampil3()
	  {cout<<"Biaya dari "<<x<<" buah item dengan harga "<<y<<" per item = "<<x*y<<endl;}
}; //akhir dari kelas List

void main()
{
   List L1;
   List *ptr;				//pointer ke List 
   ptr = &(List) L1;		//menugaskan alamat dari objek kelas

   int i,j;
   (*ptr).Setdata(i,j);		//nilai-nilai ditugaskan oleh user
   
   ptr -> Tampil1();		// (*ptr) dan ptr-> ekivalen
   ptr -> Tampil2();
   (*ptr).Tampil3();
}