#include <iostream>
using namespace std;

template <typename T> T Luas(T x, T y )		//template fungsi
{return x*y ;} // definisi

int main()
{
   int n = 4 , m = 3;
   double j = 6.5 , k = 4.1 ;

   cout<<"Luas 1 = "<<Luas<int>(n, m)<<"\t Luas 2 = "<< Luas<double>(j, k)<<endl;

   return 0;
}