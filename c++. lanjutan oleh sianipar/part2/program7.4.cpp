#include <iostream>
using namespace std;

template <class T>
void Tampil(const T*A, unsigned int ukuran)	//deklarasi dan definisi fungsi
{ 
   for( int i =0 ; i<ukuran; i++ ) 
      cout<< A[i] <<" ";
   
   cout<<endl;
}

int main ()
{
   const int K = 6, M =15, J = 4;
   int Budi[J] = {20, 30, 40, 50}; //sebuah array integer

   //Berikut adalah sebuah array double
   double Kartini[K] = {4.5, 5.6, 7.8, 8.9, 1.2, 3.4};
   
   char Nama[M] = "John Kristof"; //sebuah string karakter

   Tampil(Budi, J);
   Tampil(Kartini , K);
   Tampil(Nama , M);

   return 0;
}