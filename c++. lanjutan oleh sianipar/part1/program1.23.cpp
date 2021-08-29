#include <iostream>
using namespace std;

int main()
{
   int angka[2][3][4];

   cout<<"Tuliskan 24 integer yang dipisahkan dengan spasi: \n";

   for(int i=0;i<2;i++)
   {
      for(int j=0;j<3;j++)
	  {
         for (int k = 0; k<4;k++)
            cin>>angka[i][j][k];
	  }
   }

   cout<<"\n\n";
   for(int n=0; n<2; n++)
   {
      for(int j=0;j <3; j++)
	  {
         for (int k =0;k<4;k++)
            cout<<"angka["<<n<<"]["<<j<<"]["<<k<<"] = "<<angka[n][j][k];
         cout<<"\n"; 
	  }
   }

   cout<<"\n\n";
   for(int m=0; m<2; m++)
   {
      for(int p=0; p<3; p++)
	  {
         for (int k =0; k<4; k++)
            cout<<angka[m][p][k];
         cout<<"\n";
	  } 
      cout<<"\n"; 
   }

   return 0;
}