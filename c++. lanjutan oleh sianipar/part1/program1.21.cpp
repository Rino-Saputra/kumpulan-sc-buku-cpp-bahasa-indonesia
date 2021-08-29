# include <iostream>
using namespace std;

int main()
{
   int C[2][3], D[2][3];
   int A[2][3] = {20, 30, 40, 50, 60, 70};
   int B[2][3] = {10, 20, 20, 30, 20, 10};

   for (int i =0; i<2; i++)
      for (int j = 0; j<3; j++)
	  {
         C[i][j] = A[i][j] + B[i][j];	//penjumlahan
         D[i][j] = A[i][j] - B[i][j];   //pengurangan
	  }	

   for (int n = 0; n<2; n++)
   {
      for (int m = 0; m<3; m++)
         cout<<C[n][m]<<" " ;
      cout << "\n";
   }

   cout<<endl;

   for (int p =0 ; p<2; p++)
   {
      for (int s = 0; s<3; s++)
         cout<<D[p][s]<<" " ;
      cout << "\n";
   }

   return 0 ;
}