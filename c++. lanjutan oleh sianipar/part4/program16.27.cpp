#include<iostream>
# include<algorithm>
using namespace std;

int main()
{
   int S1[] = {19, 20, 11, 12, 113, 216};

   cout<< *min_element(S1, S1+6) <<endl; //nilai dari elemen minimum

   const int *ptr = min_element(S1, S1+6);
   cout<< (int*)ptr - S1 <<endl;  //indeks dari elemen minimum

   return 0 ;
}