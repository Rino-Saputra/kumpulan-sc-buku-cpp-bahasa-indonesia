#include <iostream>
#include <string>
using namespace std;

int main()
{ 
   string S1, S2[4], S3;
   string Nama[4] = {"John", "Kristof", "Vivian", "Robert"};

   for (int i =0; i < 4; i++)
      S2[i] = Nama[i];		//menugaskan elemen-elemen array kepada S2

   for(int k=0; k<4; k++)
      cout<<S2[k]<<" ";		//menampilkan elemen-elemen array S2

   S1 = " , Selamat mempelajari C++! ";
   
   string Psn[4];
   cout<<"\n";

   for(int j =0; j<4; j++)
   {
      Psn[j] = S2[j]. append (S1); //menempatkan S1 (di akhir) elemen-elemen dari S2
									//dan menugaskan hasilnya kepada elemen-elemen dari Psn[]

	  cout<<"Psn["<<j<<"] = "<<Psn[j]<<endl; 
   }

   return 0;
}