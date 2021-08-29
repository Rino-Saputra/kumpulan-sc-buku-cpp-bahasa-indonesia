#include <iostream>
using namespace std;
int main()
{
   int kim[] = {6,8,5,4} ;	//array dengan empat elemen
   int* pkim = kim;			//deklarasi pointer

   for (int i=0; i<4; i++)
      cout<<"kim2["<<i<<"] = "<<*(pkim +i)**(pkim +i)<<", ";
   //menciptakan array kim2 dari elemen-elemen array kim

   cout<<"\n";
   for(int j= 0; j<4; j++)	//menciptakan array kim3
      cout<<"kim3["<<j<<"]= "<<*(pkim+j)**(pkim +j) - *(pkim+j)<<", ";

   cout<<"\n";
   return 0;
}