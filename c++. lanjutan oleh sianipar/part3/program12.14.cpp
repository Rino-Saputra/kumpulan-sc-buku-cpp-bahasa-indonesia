#include<iostream>
#include<algorithm>
#include<functional>	//file header untuk predikat-predikat pustaka
using namespace std;

int main()
{
   int S[8] = {5, 6, 8, 7, 4, 3, 8, 9};
   char ch [] = {'A', 'Z', 'C', 'M', 'G', 'K', 'T'};

   sort(S, S+8, less<int>());		//menata dengan urutan menaik

   sort(ch, ch+7, greater<int>());	//menata dengan urutan menurun

   for (int i =0; i<8;i++)
      cout<<S[i]<<" ";
   cout <<endl;

   for (int j =0; j< 7 ; j++)
      cout << ch[j]<<" ";
   cout<<endl;

   return 0;
}