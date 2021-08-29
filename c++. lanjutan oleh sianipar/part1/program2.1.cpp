#include <iostream>
using namespace std;

int main()
{ 
   int n = 60 ;
   double B = 8.56;

   int* ptrn = &n;		//ptrn adalah pointer yang menunjuk ke variabel int n.
   double *pB = &B;		//pB adalah pointer yang menunjuk ke variabel double B

   cout<<"n = "<<n<<", B = "<<B<<endl;
   cout<<"Alamat dari n adalah = "<<&n<<", ptrn = "<<ptrn<<endl;

   cout<< "*ptrn = "<<*ptrn<<", *pB = " <<*pB <<endl;
   cout<<"Alamat dari B = "<<&B <<", pB = "<<pB<<endl;

   cout<<"Alamat dari ptrn = "<<&ptrn<<endl;

   return 0;
}