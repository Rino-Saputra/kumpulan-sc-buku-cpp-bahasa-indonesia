#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

template <class T>
struct LbhBesar: binary_function< T, T, bool> {
   bool operator ()(const T & x, const T& y) const
   { 
      return ( x >y );
   }
};

int main()
{
   int S[10] = {5, 6, 8, 7, 4, 3, 8, 9, 12, 14};
   
   int n = count_if( S, S +10, bind2nd(LbhBesar<int>(), 7));

   cout<<"Jumlah elemen yang lebih besar dari 7 adalah: "<<n<<endl;

   return 0;
}