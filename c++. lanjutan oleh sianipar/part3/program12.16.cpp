#include<iostream>
#include<algorithm>
using namespace std;
#include<functional>

int main()
{
   int S[] = {5, 6, 8, 7, 8, 3, 8, 10, 8, 12};

   int n = count_if(S, S+10, bind2nd(greater<int>(),7));
   cout<<"Jumlah elemen yang lebih besar dari 7 adalah: "<<n<<endl;

   int m = count_if(S, S+10, bind2nd(less<int>(),10));
   cout<<"Jumlah elemen yang lebih kecil dari 10 adalah: "<<m <<endl;

   return 0;
}