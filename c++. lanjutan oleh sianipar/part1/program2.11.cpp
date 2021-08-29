#include <iostream>
using namespace std;

int main()
{ 
   int Satu[] = {6, 8, 5, 4} ;			//array dengan 4 elemen
   int Dua[] = {2, 3, 7};				//array dengan 3 elemen
   int Tiga[] = {10, 11, 12, 13,14 };	//array dengan 5 elemen

   int* pKBS[] = {Satu , Dua, Tiga};
   //array pointer, inisialisasi dilakukan menggunakan nama-nama array

   cout<<"Satu : "<<**pKBS<<"\t"<<*(*(pKBS)+1) <<"\t"<<*(*(pKBS)+2)<<"\t"
       <<*(*(pKBS)+3)<<endl; //mendapatkan elemen-elemen dari array Satu

   cout<<"Dua : "<<*(*(pKBS+1))<<"\t"<<*(*(pKBS+1)+1)<<"\t"<< *(*(pKBS+1)+2)
       <<endl; //mendapatkan elemen-elemen dari array Dua

   cout<<"Tiga : " <<*(*(pKBS+2))<<"\t" <<*(*(pKBS+2)+1)<<"\t" 
	   <<*(*(pKBS+2)+2)<<"\t"<<*(*(pKBS+2)+3)<<"\t"<<*(*( pKBS+2)+4)<<endl;
   //mendapatkan elemen-elemen dari array

   return 0 ;
}