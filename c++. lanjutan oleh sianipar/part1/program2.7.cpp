#include <iostream>
using namespace std;

int main()
{ 
   int A[] = {80, 40, 20, 10};	//A adalah sebuah array integer
   int *ptrA = A;	//ptrA adalah pointer ke array A. Perhatikan bahwa A tidak digunakan

   cout<<"*ptrA = "<<*ptrA<<" , \tptrA = "<<ptrA<<endl;
   cout<<"*(ptrA+1) = "<<*(ptrA+1)<<" ,\tptrA+1 = "<<ptrA+1<<endl;

   cout<<"*(ptrA+2) = "<<*(ptrA+2)<<" , \tptrA + 2 = "<<ptrA+2<<endl;
   cout<<"*(ptrA+3) = "<<*(ptrA+3)<<" , \tptrA+3= "<<ptrA+3<<"\n\n";

   cout<<"A = " <<A<<endl;
   cout<<ptrA[0]<<"\t"<<ptrA[1]<<"\t"<<ptrA[2]<<"\t"<<ptrA[3]<<endl;

   cout<<*(A+0)<<"\t"<<*(A+1)<<"\t"<<*(A+2)<<"\t"<<*(A+3)<<endl;
   //ini akan menampilkan nilai dari tiap elemen array

   return 0;
}