#include<iostream>
# include<algorithm>
using namespace std;

int main()
{ 
   int S1[] = {11, 12, 113, 216, 19, 20 };
   cout<< *max_element(S1, S1+6) <<endl;

   const int *ptr = max_element(S1, S1+6);

   //nilai dari max_element
   cout<< (int*)ptr - S1 <<endl; //posisi dari elemen maks
   
   return 0 ;
}