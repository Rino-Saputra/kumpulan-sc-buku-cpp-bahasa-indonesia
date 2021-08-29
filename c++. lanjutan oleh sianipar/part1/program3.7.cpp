#include <iostream>
using namespace std;

class List{
   private:
      int x, y, z;

   public:
      List (int a, int b, int c) {x = a, y = b, z = c;} //konstruktor

      void Tampil()
	  {
         cout<<"Harga dari item 1 = "<<x<<endl;
         cout<<"Harga dari item 2 = "<<y<<endl;
         cout<<"Harga dari item 3 = "<<z<<endl; 
	  }
}; //akhir dari kelas List

void main()
{ 
   int n = 0;

   List L1 (12, 15, 27);
   cout<<"List "<<++n<<endl;
   List *ptr = &L1;		//(*ptr) dan ptr-> ekivalen
   ptr -> Tampil();

   cout<<"\nList"<< ++n <<"\n";
   List L2(30, 54, 60);
   ptr = & L2 ;
   (*ptr).Tampil();
}