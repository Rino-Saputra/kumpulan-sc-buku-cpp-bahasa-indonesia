#include <iostream>
using namespace std;

main()
{ 
   int n = 60;
   int* ptrn, *ptrm ;	//deklarasi dari dua piointer ke int

   ptrn = &n;
   ptrm = ptrn;			//menugaskan pointer

   cout<<"n = "<<n<<"\t&n = "<<&n<<"\t *&n = "<<*&n<<endl;
   cout<<"ptrn = "<<ptrn<<" "<<"ptrm = "<<ptrm<<endl;

   cout<<"Nilai yang ditunjuk oleh ptrn = "<<*ptrn<<"\n" ;
   // *ptrn adalah nilai yang ditunjuk oleh pointer ptrn

   cout<<"Nilai yang ditunjuk oleh ptrm = " <<*ptrm<<endl;
   cout<<"Alamat dari ptrn = "<<&ptrn<<endl;

   double PI = 3.141592;
   double *pPI;			//deklarasi dari pointer untuk PI

   pPI = &PI;

   cout<<"PI="<<PI<<",\t &PI = "<<&PI<<"\n";
   cout<<"*&PI = "<<*&PI<< " ,\t *pPI = "<<*pPI<<"\n";

   return 0;
}