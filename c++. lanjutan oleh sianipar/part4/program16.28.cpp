#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   char S1[] = "Komputer, Komputar, Komputor";
   char S2[] = "Komputer, Komputer, Komputer";
   int m = strlen(S1);

   pair<char*, char*> p = mismatch( S1, S1+m, S2);

   char* S1ptr= p.first;
   char* S2ptr= p.second;

   cout<<"Panjang = "<< m <<endl;
   cout<<"Lokasi pertama dari ketidakcocokan di dalam string S1 adalah pada "<<S1ptr - S1<<endl;
   cout<<"Lokasi pertama dari ketidakcocokan di dalam string S2 adalah pada "<<S2ptr - S2<<endl;

   return 0;
}