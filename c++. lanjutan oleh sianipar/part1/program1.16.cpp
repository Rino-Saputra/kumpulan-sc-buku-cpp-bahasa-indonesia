#include <iostream>
using namespace std;

int main()
{
   const int p = 5;
   char kar[10] ;

   cout<<"Masukkan 5 karakter: ";
   for(int i=0; i<p; i++)
      cin>> kar[i];

   cout<<"\nAnda telah memasukkan karakter-karakter berikut: \n ";
   for(int k =0; k<p; k++)
      cout<<" "<<kar[k]<<" ";

   cout<<"\n";

   for (int n = 0 ; n<p; n++)
   {
      for(int j =0; j<p-1; j++) 
	  {
         if(kar[j]>kar[j+1])
            swap(kar[j], kar[j+1]); 
	  }

      for (int r =0; r<5; r++)
         cout<<kar[r]<<" ";

	  cout<<"\n";
   }

   return 0;
}