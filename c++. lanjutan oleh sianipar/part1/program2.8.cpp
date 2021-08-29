#include <iostream>
using namespace std;

int main()
{ 
   int kim[] = {50, 86, 90, 12};
   int* pkim = kim; //mendefinisikan pointer ke array kim

   for (int i=0 ;i<4; i++) //loop for untuk menampilkan isi array
      cout<<"kim["<<i<<"] = "<<*(pkim +i)<<", ";
   //*(pkim +i) adalah nilai dari elemen kim[i] dari array

   return 0;
}