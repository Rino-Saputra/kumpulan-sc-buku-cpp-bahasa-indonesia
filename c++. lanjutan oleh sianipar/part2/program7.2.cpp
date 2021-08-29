#include <iostream>
using namespace std;

template <class T> T maks(T x, T y)	//definisi fungsi
{return x>y ? x : y;}				//tubuh fungsi

int main()
{ 
   int n = 64, m = 67 ;			//variabel-variabel int
   char ch1 = 'S' , ch2 = 'R';	//variabel-variabel char
   double D1 = 6.87, D2= 8.34;	//variabel-variabel double

   cout<<"maks(n,m)= "<<maks<int>(n,m)<<endl;

   cout<<"maks(ch1,ch2) = "<<maks<char>(ch1,ch2)<<endl;

   cout<<"maks(D1,D2) = "<<maks<double>(D1, D2)<< endl;

   return 0;
}