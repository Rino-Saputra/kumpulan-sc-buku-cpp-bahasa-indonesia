#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{ 
   vector<int> V;
   int S[12] = {10, 20, 25, 26, 27, 36, 20, 25, 26, 27, 70, 90};

   for(int i =0; i < 12 ;i++)
      V.push_back (S[i]);

   int Runtun1_Ditemukan[] = {20, 25,26,27};
   vector<int>:: iterator iter;

   iter = find_end( V.begin(), V.end(), Runtun1_Ditemukan, Runtun1_Ditemukan + 3);

   if ( iter != V.end())
      cout<<"Elemen terakhir pada Runtun1_Ditemukan pada posisi "<< *iter <<endl;
   else
      cout<<"Tidak ada Runtun1_Ditemukan di dalam vektor V."<<endl;

   int Runtun2_Ditemukan[] = {20, 4,26 };
   iter = find_end( V.begin(), V.end(), Runtun2_Ditemukan, Runtun2_Ditemukan + 2);

   if ( iter != V.end())
      cout<<"Elemen terakhir pada Runtun2_Ditemukan pada posisi "<< *iter <<endl;
   else
      cout<<"Tidak ada Runtun2_Ditemukan di dalam vektor V."<<endl;

   return 0 ;
}