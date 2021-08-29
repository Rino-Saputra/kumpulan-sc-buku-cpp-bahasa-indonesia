#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> V1;
   int S1[6] = {10, 13, 25, 36, 25, 50};

   for(int i =0; i < 6 ;i++)
      V1.push_back (S1[i]);

   vector<int> V2;
   int S2[6] = {10, 13, 25, 36, 25, 25};

   for(int j =0; j < 6 ;j++)
      V2.push_back (S2[j]);

   int S3 [] = {11,12,13, 4,5,11,12,13};
   vector<int> V3;

   for ( int k =0; k<8 ; k++)
      V3.push_back ( S3[k]);

   if (equal( V3.begin(), V3.begin()+4, V3.begin()+5));
      cout <<"Dua subhimpunan yang memuat empat nilai adalah sama."<<endl;
   if(equal( V1.begin(), V1.end(), V2.begin ()))
      cout<<"Dua vektor sama." <<endl;
   else
      cout<<"Dua vektor tidak sama."<<endl;

   return 0 ;
}