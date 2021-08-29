#include<iostream>
#include<algorithm>
using namespace std;

int main()
{ 
   int S1[] = {11, 12, 13, 16, 16, 19, 20, 20, 20, 22, 24};

   int* ptr1 = lower_bound(S1, S1+11, 20);
   cout <<"lower_bound untuk 20 = "<< (int*)ptr1 - S1 <<endl;

   int* ptr2 = lower_bound(S1, S1+11, 16);
   cout <<"lower_bound untuk 16 = "<< (int*)ptr2 - S1 <<endl;

   int *uptr1 = upper_bound (S1, S1+11, 16);
   cout <<"upper_bound dari 16 = "<< (int*)uptr1 - S1 <<endl;

   int* uptr2 = upper_bound (S1, S1+11, 20);
   cout <<"upper_bound dari 20 = "<< (int*)uptr2 - S1 <<endl;

   return 0 ;
}
