#include<iostream>
#include<algorithm>
using namespace std;

int main()
{ 
   int S[8] = { 5,6,7,8,9,11,12,13 };
   int A [9]= { 5,6,7,8, 21,22,23,24,25};
   bool B ;

   B = includes(S, S+8, A, A+4); //menguji apakah A sampai A+4 ada di dalam S

   if (B)
      cout <<"Runtun S memuat A[0] sampai A[3]"<< endl;
   else
      cout <<"Runtun S tidak memuat A[0] sampai A[3]"<< endl;

   return 0 ;
}