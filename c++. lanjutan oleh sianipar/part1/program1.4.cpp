#include <iostream>
using namespace std;

int main()
{
   int Angka[5];
   
   cout<<"Masukkan lima integer: ";
   for (int i=0;i<5;i++)
      cin>>Angka[i];
   cout<<"\n";

   for (int j=0;j<5;j++)
      cout<<" Angka["<<j<<"] = "<<Angka[j]<<endl;

   return 0;
}