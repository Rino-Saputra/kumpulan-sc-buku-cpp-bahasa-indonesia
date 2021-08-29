#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   char Set1[] = {"ACDGHIJKTUVZ"};
   char Set2[] = {"BCDKMNPUV"};
   char Setx[12];
   char Setxy[15];
   char SetA[20];
   char SetU[25];

   cout<<"Set1 = "<<Set1<<endl;
   cout<<"Set2 = "<<Set2<<endl;

   char* Sety = set_difference(Set1, Set1+12, Set2, Set2+9, Setx);
   *Sety =0;
   cout<<"set_difference = "<<Setx<<endl;

   char* Setz = set_intersection(Set1, Set1+12, Set2, Set2+9,Setxy);
   *Setz =0;
   cout <<"set_intersection = "<<Setxy<<endl;

   char* Setm = set_symmetric_difference(Set1, Set1+12, Set2,Set2+9, SetA);
   *Setm = 0;
   cout <<"Set_symmetric_difference = "<<SetA<<endl;

   char* Setn = set_union(Set1, Set1+12, Set2, Set2+9, SetU);
   *Setn =0;
   cout <<"Union dari Set1 dan Set2 = "<<SetU<<endl;

   return 0 ;
}