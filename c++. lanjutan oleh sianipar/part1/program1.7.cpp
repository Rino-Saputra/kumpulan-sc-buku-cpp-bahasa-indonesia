#include <iostream>
using namespace std;

int main()
{
   double Bobot [] = {5.4, 6.35, 12.6};					//sebuah array

   char Nama[] = {'J', 'A', 'K', 'A', 'R', 'T', 'A'};	//sebuah array

   char ch[] = {"Jakarta"};		//Sebuah string, yang juga bisa dikode dengan
   // char ch [] = "Jakarta";

   cout<<"Ukuran dari array Nama = "<<sizeof(Nama)<<endl;
   cout<<"Ukuran dari ch = "<<sizeof(ch)<<endl;

   for (int i=0;i<7;i++)
      cout <<Nama[i] ;
   cout<<"\n";

   for (int j=0; j<3; j++)
      cout<<Bobot[j]<<" ";
   cout<<"\n";

   cout<<ch;
   return 0;
}