#include <iostream>
using namespace std;

class List {
   private:
      int x,y; //x = jumlah item, y = harga per item

   public:
      void set_data(int a, int b)
	  {
         x = a;
         y = b;
	  }

      void Tampil()
	  {
         cout<<"Jumlah item = "; cin>>x;
         cout<<"Harga tiap item = "; cin>>y;
         cout<<"Biaya dari "<<x<<" buah item dengan harga "<<y<<" per item = "<<x*y<<endl;
	  }
}; //akhir dari kelas List

void main()
{
   List *ptr= new List[3]; //pointer ke kelas List

   for (int k=0; k<3; k++)
   {
      cout<<"Untuk nomor item " <<k+1<<endl;
      int i=0,j=0; //user memasukkan data
      (*ptr).set_data(i,j);
      ptr -> Tampil();
   } // (*ptr) dan ptr-> ekivalen

   delete[] ptr;
}