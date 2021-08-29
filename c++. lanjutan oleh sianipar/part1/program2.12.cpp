#include <iostream>
using namespace std;

int main()
{ 
   int KBS[3][4] = {6,8,5,4, 2,3,7,9, 10,11,12,13};
   int(*pKBS)[4] = KBS ; //deklarasi dari pointer ke KBS

   cout<<**pKBS<<"\t"<<*(*(pKBS)+1)<<"\t"<<*(*(pKBS)+2)<<"\t"
       <<*(*(pKBS)+3)<<endl;

   cout<<*(*(pKBS+1))<<"\t"<<*(*(pKBS+1)+1)<<"\t"<<*(*(pKBS+1)+2)<<"\t"
	   << *(*(pKBS+1)+3) <<endl;

   cout<<*(*(pKBS+2))<<"\t"<<*(*(pKBS+2)+1)<<"\t"<<*(*(pKBS+2)+2)
       <<"\t"<<*(*( pKBS+2)+3)<<endl;

   return 0; 
}