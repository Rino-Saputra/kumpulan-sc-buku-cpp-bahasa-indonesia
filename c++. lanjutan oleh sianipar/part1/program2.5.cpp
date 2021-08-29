#include <iostream>
using namespace std;

int main()
{ 
   int D, *ptrD = &D ;	//deklarasi D dan pointer yang menunjuk ke D
   double PI= 3.14159;
   double* ptrPI = &PI; //pointer ke PI

   cout<<"Tuliskan diameter lingkaran: ";
   cin>>*ptrD;
   cout<<"Diameter = "<<*ptrD <<endl;

   double keliling = *ptrD * *ptrPI;		// = PI*D
   double luas = *ptrPI* *ptrD **ptrD/4;	// = PI*D *D /4

   cout<<"Keliling = " <<keliling<<endl;
   cout<<"Luas lingkaran = " <<luas<<endl;

   return 0;
}