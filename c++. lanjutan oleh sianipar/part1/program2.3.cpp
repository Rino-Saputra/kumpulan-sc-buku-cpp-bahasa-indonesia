#include <iostream>
using namespace std;

int main()
{ 
   int n = 60, *pn;
   double PI = 3.14159, *pPI;

   pPI = &PI;
   pn = &n;

   char ch = 'M', *sam; //sam adalah nama pointer
   sam = &ch;			//pointer diinisialisasi dengan &ch.

   cout<<"Ukuran dari pointer yang menunjuk ke int n = " <<sizeof(pn)<<endl;

   cout<<"Ukuran dari pointer yang menunjuk ke double PI = "<<sizeof(pPI)<<endl;

   cout<<"Ukuran dari pointer yang menunjuk ke char ch = "<<sizeof(sam)<<endl;

   cout<<"Variabel-variabel yang digunakan: "<<*pn <<", "<<*pPI<<" dan "<<*sam<< endl;

   return 0;
}