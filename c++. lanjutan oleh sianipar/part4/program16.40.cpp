#include<iostream>
#include<algorithm>
using namespace std;

void main()
{
   int S1[] = {11, 12, 13, 15, 16, 17, 18, 19 ,20};

   cout<<"S1= ";
   rotate ( S1, S1+4,S1+9);
   for (int j =0; j<9; j++)
      cout << S1[j]<<" ";
}