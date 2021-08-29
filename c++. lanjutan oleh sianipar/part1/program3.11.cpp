#include <iostream>
using namespace std;

class List{
   private:
      int x, y, z;

   public:
      int s;
      List(int a, int b, int c) {x = a, y = b, z = c;} //konstruktor
}; //akhir dari kelas List

void main()
{
   List L1( 10, 20 , 30); ;
   L1.s = 40;
   int *ptrL1 ;

   ptrL1 = (int*)& L1 ;
   cout<<"Nilai dari x = "<<*ptrL1<<endl;
   cout<<"Alamat dari x = "<<ptrL1<<endl;

   ptrL1++;
   cout<<"Data y dari L1 = "<<*ptrL1<<endl;
   cout<<"Alamat dari y = "<<ptrL1<<endl;

   ptrL1++;
   cout<<"Data z dari L1 = "<<*ptrL1<<endl;
   cout<<"Alamat dari z = "<<ptrL1<<endl;

   ptrL1 ++;
   cout<<"Data s dari L1 = "<<*ptrL1<<endl;
   cout<<"Alamat dari s = "<<ptrL1<<endl;
}