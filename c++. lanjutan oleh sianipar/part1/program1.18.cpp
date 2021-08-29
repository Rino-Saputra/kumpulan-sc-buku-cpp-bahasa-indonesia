#include <iostream>
using namespace std;

int main()
{
   int angka[10] = {0}, maks;

   cout<<"Masukkan 10 integer: ";
   {
      for(int i=0;i<10;i++)
         cin>>angka[i];
   }

   cout<<"\nAnda telah memasukkan nilai-nilai berikut: \n";
   for(int i =0;i<10;i++)
      cout<<" "<<angka[i]<<" ";

   cout<<"\n ";

   maks = angka[0];
   {
      for(int j = 0; j<9; j++)
         if(angka[j] > maks)
            maks = angka[j];
         else maks = maks; 
   }

   cout <<"maks = "<< maks<<endl;
   {
      for(int k=0; k<10; k++)
         if (maks == angka[k])
            cout<<"angka["<<k<<"] = " << angka[k] <<endl; 
   }

   return 0;
}