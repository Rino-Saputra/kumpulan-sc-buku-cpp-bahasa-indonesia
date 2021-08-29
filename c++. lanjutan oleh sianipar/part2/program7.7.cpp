#include <iostream>
using namespace std;

template <class generik>	//deklarasi dan definisi dari Tukar
void Tukar (generik x[ ], generik y[ ], int m)
{
   generik temp ; // type identifier is generik in place of T
   for (int i = 0; i<m;i++)
   {
      temp = x[i];
      x[i] = y[i];
      y[i] = temp ; 
   }
} //akhir dari template fungsi

void main()
{ 
   double Budi[] = {11.1, 12.2, 13.3, 14.4 ,15.5};
   double Wati[] = {30.5, 31.1, 32.2, 33.3, 34.4};
   
   char Ch[] = {'B', 'A', 'N', 'G', 'S', 'A'};
   char Kh[] = {'S', 'O', 'N', 'T', 'A', 'K'};
   
   int K[5] = {1, 2, 3, 4, 5};
   int M[5] = {50, 60, 70, 80, 90};

   cout<<"Sebelum penukaran array:\n";
   cout<<"Budi\tWati\tCh\tKh\tK\t M"<<endl;
   for  (int k = 0; k <5; k++)
      cout <<Budi[k] <<"\t"<<Wati[k]<<"\t"<<Ch[k]<<"\t"<<Kh[k] <<"\t" 
	       <<K[k]<<"\t"<<M[k] <<endl;
   
   Tukar(Budi, Wati, 1);
   Tukar(K, M, 3);
   Tukar(Ch, Kh, 5) ;

   cout<<"Setelah penukaran array:\n";
   cout<<"Budi\tWati\tCh\tKh\tK\tM "<<endl;
   for (int j = 0; j <5; j++)
   cout <<Budi[j] <<"\t"<<Wati[j]<<"\t"<<Ch[j]<<"\t"<<Kh[j]<< "\t"
        <<K[j]<<"\t"<<M[j]<<endl;
}