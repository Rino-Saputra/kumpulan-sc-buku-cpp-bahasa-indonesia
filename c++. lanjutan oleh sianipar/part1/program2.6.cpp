#include <iostream>
using namespace std;
int main()
{ 
   int n = 57 ;
   int* ptrn = &n;	//pointer ke n

   cout<<"n = "<<n<<", Alamat dari n = " <<&n<<endl;
   cout<<"ptrn = "<< ptrn<<endl;
   cout<<"Alamat dari ptrn = "<<&ptrn<<endl;

   int** pptrn = &ptrn; //pointer ke pointer ke n
   cout<<"pptrn = "<<pptrn<<endl;

   int*** ppptrn = &pptrn; //pointer ke pointer ke pointer ke n
   cout<<"Alamat dari pptrn = "<<&pptrn<<endl;

   cout<<"ppptrn = "<<ppptrn<<"\n";
   cout<<"*ptrn = "<<*ptrn<<endl;

   cout<<"*pptrn = "<<*pptrn<<endl;
   cout<<"**pptrn = "<<**pptrn<<endl;

   cout<<"***ppptrn = "<<***ppptrn<<endl;

   return 0;
}