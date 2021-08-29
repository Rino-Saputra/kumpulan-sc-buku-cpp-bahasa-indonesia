#include <iostream>
using namespace std;
int main()

{
   char ch = 'S';
   char* pc = &ch;

   cout<<"*pc = "<<*pc<<endl;

   double x = 4.5, z;
   typedef double* pd;
   pd px = &x;	//di sini, pd adalah singkatan untuk double*

   cout<<"px = "<<px<<endl;		//menampilkan nilai dari px
   cout<<"&x = "<< &x<<endl;	//menampilkan alamat dari &x

   pd pz = &z;
   pz = px;		//px (alamat dari x) ditugaskan kepada pz

   cout<<"*pz = "<<*pz<<endl;
   cout<<"*px = "<<*px<<endl;

   return 0;
}