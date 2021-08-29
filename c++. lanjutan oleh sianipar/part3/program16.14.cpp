#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int *Cari;
   int S[9] = {1, 6, 2, 3, 4, 5, 6, 7, 8};
   int S2[] = {5, 6, 7};

   Cari = find_first_of(S, S+9, S2, S2+3);

   if(Cari != S+9) //jika tidak ada kesesuaian, pointer menunjuk ke akhir runtun
      cout<<"Ditemukan kecocokan: "<< *Cari<<endl;

   return 0 ;
}