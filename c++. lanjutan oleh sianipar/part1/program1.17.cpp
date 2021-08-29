#include <iostream>
using namespace std;

main()
{
   int angka[10] ;
   
   cout<<"Masukkan 10 integer: ";
   { 
      for(int i=0;i<10;i++)
         cin>>angka[i]; 
   }

   cout<<"Array terurut diberikan berikut: \n ";
   {
      for (int i=0;i<10;i++)
         for(int j =0;j<9;j++)
            if (angka[j]>angka[j+1])
               swap(angka[j],angka[j+1]); 
   }

   for(int i=0;i<10;i++)
      cout<<angka[i]<<" ";

   cout<<"\n";

   return 0;
}