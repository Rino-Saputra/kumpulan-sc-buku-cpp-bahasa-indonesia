#include <iostream>
using namespace std;

int main()
{
   int Angka1[4] = {20, 30, 10, 15};
   int Angka2[5] = {5, 6, 7, 8, 9};

   for(int i = 0; i<5;i++)
   {
      swap(Angka1[i], Angka2[i]);
      cout<<"Angka1["<<i <<"] = "<<Angka1[i]<<"\n"; 
   }

   cout <<"\n";
   for(int j = 0; j<5; j++)
      cout<<"Angka2["<<j<<"] = "<<Angka2[j]<<"\n";

   return 0;
}