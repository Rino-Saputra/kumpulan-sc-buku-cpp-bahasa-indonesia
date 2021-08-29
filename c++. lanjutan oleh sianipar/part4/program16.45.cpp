#include<iostream>
# include<algorithm>
using namespace std;

int main()
{
   int S1[] = {11, 121, 19, 122, 260, 203, 240, 22};
   int* ptr = upper_bound (S1, S1+8, 122);

   cout<<"Batas atas adalah "<<*ptr<< endl;
   cout<<"Indeksnya adalah "<< ptr - S1 <<" di dalam array."<<endl;

   return 0 ;
}