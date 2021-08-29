#include <iostream>
using namespace std;

main()
{
   int Angka[4] = {20, 30, 10, 15};

   cout<<"Berikut adalah isi dari array Angka: "<<endl;
   for (int i =0; i <6; i++)
      cout<<"Angka["<<i<<"] = " << Angka[i]<<"\n";

   return 0;
}