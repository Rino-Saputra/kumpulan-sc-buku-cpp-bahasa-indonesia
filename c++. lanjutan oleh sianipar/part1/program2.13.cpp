#include <iostream>
using namespace std;

int main()
{
   int KBS[2][3][4] = {6,8,5,4, 2,3,7,9, 1,2,3,4, 21,22,23,24, 31,32,33,34,
                        41, 42, 43, 44} ; //sebuah array tiga dimensi
   int(* pKBS )[3] [4] = KBS; //deklarasi pointer

   for (int i = 0; i<2; i++)
   {
      for (int j =0; j <3; j++)
	  {
         for (int k =0; k<4; k++)
            cout<<*(*(*(pKBS +i) + j) +k)<<" ";
            cout<<"\n";
	  }
      cout<<"\n";
   }

   return 0 ;
}