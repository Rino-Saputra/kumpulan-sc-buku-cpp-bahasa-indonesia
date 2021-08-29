#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

void Kali(int &x)
{
	cout<<10*x<<" ";
}

int main()
{ 
   int S1[] = {5, 6, 8, 7, 4, 3, 8, 10, 11, 12};

   for_each (S1, S1+10, Kali);
      cout<<"\n";

   return 0;
}