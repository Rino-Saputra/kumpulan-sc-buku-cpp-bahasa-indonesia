#include <iostream>
using namespace std;

template <class T>
void Tampil(const T A[], unsigned int ukuran)	//deklarasi dan definisi fungsi
{ 
   for( int i =0 ; i<ukuran; i++ ) 
      cout<<A[i]<<" ";
   
   cout<<endl;
}

int main ()
{
   const int K = 6, M =15, J = 7, N = 4;
   int Budi[J] = {20,30, 40,50,60,70,80};

   char ch[N] = {'D', 'E', 'S', 'A'};

   double Kartini[K] = {4.5, 5.6, 7.8, 8.9, 1.2, 3.4};
   
   char* S[M] ={"Kristof", "John", "Martina", "Sandora", "Jelita"};

   Tampil(Budi, J);		//memanggil fungsi template
   Tampil(Kartini, K);
   Tampil(ch, N);
   Tampil(S, M);
   
   return 0;
}