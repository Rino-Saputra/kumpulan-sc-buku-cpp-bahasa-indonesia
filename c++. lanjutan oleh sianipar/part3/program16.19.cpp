#include<iostream>
#include<numeric>
using namespace std;

int main()
{ 
   int S[7] = { 6,4,8,9,10,20,10};
   int A[7] = { 2,2,2,2,2,2,2};
   int n = 20;

   //Nilai dari n menginisialisasi inner_product.
   int hasilPerkalianDalam = inner_product(S ,S+7, A, n);

   cout<<"Hasil perkalian dalam dari elemen-elemen S dan A ditambah "<<n<<" = "
	   <<hasilPerkalianDalam<<endl;

   return 0 ;
}