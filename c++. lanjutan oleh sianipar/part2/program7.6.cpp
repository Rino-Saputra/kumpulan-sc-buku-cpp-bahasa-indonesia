#include <iostream>
using namespace std;

template <class T>	//template fungsi pengurutan
void UrutArray(T A[], const int n)
{
   for (int i = 0 ;i<n;i++)
   {
      for(int j=0;j<n-1;j++)
         if(A[j]>A[j+1])
            swap(A[j],A[j+1]);
   }
}

template <class T>
void Tampil(T A[], unsigned int ukuran)
{ 
   for (int i =0; i<ukuran; i++)
      cout<<A[i]<<" ";
   cout<<endl;
}

int main ()
{ 
   const int K = 6, J = 7;
   int ArrInteger[J] = {20, 30, 70, 80, 40, 50, 60};

   char ch [6] = {'B', 'A', 'N', 'G', 'S', 'A'};
   double ArrDouble[K] = {4.5, 5.6, 1.2, 7.8, 8.9, 3.2};

   UrutArray(ArrInteger, J);
   Tampil(ArrInteger, J);

   UrutArray(ArrDouble, K);
   Tampil<double>(ArrDouble, K);

   UrutArray(ch, 6);
   Tampil<char>(ch, 6);

   return 0;
}