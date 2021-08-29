#include <iostream>
using namespace std;
int main()
{ 
   int A[] = {80, 70, 60, 50} ; //array A
   int B[] = {10, 20, 30, 40};	//array B
   int* pAB[] = {A, B} ;

   //Array yang memuat pointer-pointer yang diinisialisasi dengan
   //nama array A dan B
   cout<<"Alamat dari A = "<<A<<endl;
   cout<<"Alamat dari B = "<<B<<"\n\n";

   cout<<"Alamat dari elemen pertama dari pAB[0] = "<<pAB<<endl;
   cout<<"Alamat dari elemen kedua dari pAB[1] = "<<pAB +1<<endl;

   cout<<"*pAB = "<<*pAB <<",\t**pAB = "<<** pAB <<"\n\n";
   // Here *pAB = A and **pAB = A[0], see the output below.

   cout<<"A[0] = *(*pAB) = "<<* (* pAB)<<endl;
   cout<<"A[1] = *(*pAB+1) ="<<*(*pAB+1)<<endl;

   cout<<"A[2] = *(*pAB+2) = "<<*(*pAB +2)<<endl;
   cout<<"A[3] = *(*pAB+3) = "<<*(*pAB +3)<<endl<<endl;
   
   cout<<"*(pAB+1)= " <<*(pAB+1) <<"\t **(pAB+1) = " <<**(pAB+1)<< endl;
   //di sini, *(pAB+1) = B dan **(pAB +1) = B[0], lihat keluaran

   cout<<"B[0]= *(*(pAB+1)) = "<<*(*(pAB+1)+0)<<endl;
   cout<<"B[1] = *(*(pAB+1)+1) = "<<*(*(pAB+1)+1)<<endl;

   cout<<"B[2]= *(*(pAB+1)+2) = "<<*(*(pAB+1)+2)<<endl;
   cout<<"B[3] = *(*(pAB+1)+2) ="<<*(*(pAB+1)+3 )<<endl;

   return 0;
}