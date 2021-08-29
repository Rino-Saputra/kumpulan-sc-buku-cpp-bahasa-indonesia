#include <iostream>
using namespace std;

int main()
{
   int jum = 0;
   int Angka[] = {20, 30, 10, 15, 50, 40, 30, 70, 95};

   int x;
   int ukuran = sizeof (Angka)/sizeof(int);

   cout<<"Tulislah nilai yang akan dicari: ";
   cin >>x; // x adalah nilai yang akan dicari di dalam array

   for(int i =0; i<ukuran; i++)
      if(x == Angka[i])
	  {
         cout<<"Ya, nilai ada di dalam array Angka, yaitu Angka["<<i <<"]= "<<Angka[i]<<endl;
         goto Akhir;
	  }

   cout<<"Nilai yang dicari tidak ada di dalam array Angka"<<endl;

   Akhir:
   return 0;
}