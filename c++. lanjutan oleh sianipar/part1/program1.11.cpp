#include <iostream>
using namespace std;

int main()
{ 
   int jum=0;
   int Angka[] = {20, 30, 40, 50, 60, 70, 80, 95, 102, 166, 175, 200};
   int x;

   cout<<"Tulislah nilai yang Anda cari: "; 
   cin>>x;
   
   int ukuran = sizeof (Angka) / sizeof(int);
   int Bawah = 0;
   int Atas = ukuran -1;

   while (Bawah <= Atas)
   {
      if(Bawah ==Atas && Angka[Atas] != x)
	  { 
         cout<<"Nilai yang dicari tidak ada di dalam array.\n";
         break;
	  }

	  int Tengah = (Bawah + Atas)/2;
      if (Angka[Tengah] == x)
	  { 
         cout<<"Nilai ditemukan. Ia berada pada Angka["<<Tengah <<"]"<< endl;
         break;
	  }
      else
         if (Angka[Tengah] > x )
            Atas = Tengah-1;
         else
            Bawah = Tengah+1;
   }

   return 0;
}