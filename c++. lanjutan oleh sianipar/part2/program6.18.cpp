#include <iostream>
using namespace std;

void F(char* M)
{cout<<M<<endl;}

int main()
{ 
   const char * S= "Jakarta";

   //F(S); Error, tidak dapat mengkonversi dari const char* menjadi char*
   F(const_cast<char*>(S)); //ini OK

   const int n = 10;
   const int *ptrn = &n;

   // n= n+5; Error, n adalah const. Tetapi berikut OK
   *(const_cast<int*>(ptrn)) = n + 5;
   cout<<*(const_cast<int*>(ptrn))<<endl;

   //const_cast<int>(n) = n+8; Ini menghasilkan error, operator const_cast
   //tidak dapat mengkonversi dari const int menjadi int.
   cout << n <<endl;

   return 0 ;
}