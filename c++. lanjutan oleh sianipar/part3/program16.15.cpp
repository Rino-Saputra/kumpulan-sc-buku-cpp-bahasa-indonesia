#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
   int S[] = {5, 6, 3, 7, 8, 3, 8, 10, 8, 12};
   int* n = find_if(S, S+10, bind2nd(greater<int>(),7));

   cout<<"*n = "<< *n<<endl;
   cout <<"Posisi dari elemen = elemen ke-"<<n + 1 - S<<endl;

   return 0;
}