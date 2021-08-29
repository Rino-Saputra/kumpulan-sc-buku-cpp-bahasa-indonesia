#include<iostream>
#include<vector>
using namespace std;

vector <double> V(4);		// ukuran = 4, nilai masing-masing elemen = 0
vector <int> V1(4,35);		// ukuran = 4, nilai masing-masing elemen = 35

int main()
{
   vector<double> V2(4, 4.5);	//ukuran = 4, nilai masing-masing elemen = 4.5
   vector<char> V3(4, 'B');		//vektor V3 memiliki empat elemen, 
								//dengan nilai masing-masing elemen adalah ‘B’.

   vector <int> V4(V1);			// V4 adalah salinan dari V1
   vector<int> V5 ;

   for(int i =0; i<4;i++ )		//Menciptakan sebuah vektor dengan 4 elemen.
      V5.push_back (5);			//Masing-masing elemen bernilai 5.

   cout<<"V \tV1\tV2\tV3 \tV4"<<"\tV5"<<endl;
   for ( int j = 0; j< 4; j++)	// loop for untuk menampilkan keluaran
      cout <<V[j]<<"\t"<< V1[j]<<"\t" <<V2[j]<<"\t"<< V3[j] <<"\t"<<
             V4[j]<<"\t"<<V5[j]<<endl ;

   return 0;
}