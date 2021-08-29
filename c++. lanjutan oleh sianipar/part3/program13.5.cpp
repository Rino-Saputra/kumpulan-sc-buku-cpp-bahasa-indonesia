#include<iostream>
#include<vector>
using namespace std;

vector<int> V;

int main()
{
   V.assign(6,8); //menugaskan 6 nilai, masing-masing nilai 8, kepada V

   for (int i = 0; i< 6; i++)
      cout<<V[i] <<" ";
   cout<<"\n";

   for(int j=0;j< 6 ;j++)
   {
      V[j] = j*V[j]; //setiap elemen dikali dengan nilai indeksnya
      cout <<V[j]<<" ";
   }
   cout<<"\n";

   for (int k =0; k<8; k++)
   //Perhatikan bahwa nilai maks dari k lebih dari jumlah elemen
      cout<<"Elemen "<<k<<" = "<<V.at(k)<<endl;

   return 0;
}